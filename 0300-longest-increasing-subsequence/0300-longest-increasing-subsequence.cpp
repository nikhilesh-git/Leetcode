class Solution {
public:
    int f(int i,int prev_ind,vector<int> &nums,vector<vector<int>> &dp){
        if(i==nums.size()){
            return 0;
        }
        if(dp[i][prev_ind+1]!=-1) return dp[i][prev_ind+1];
        int notTake=f(i+1,prev_ind,nums,dp);
        int take=0;
        if(prev_ind==-1 || nums[i]>nums[prev_ind]){
            take=1+f(i+1,i,nums,dp);
        }
        return dp[i][prev_ind+1]=max(take,notTake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        //memoizaton
        // vector<vector<int>> dp(n,vector<int>(n+1,-1));
        // return f(0,-1,nums,dp);

        //tabulation
        // vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        
        // // Build the table from bottom-up
        // for (int i = n - 1; i >= 0; i--) {
        //     for (int prev_ind = i - 1; prev_ind >= -1; prev_ind--) {

        //         int notTake = dp[i + 1][prev_ind + 1];

        //         int take = 0;
        //         if (prev_ind == -1 || nums[i] > nums[prev_ind]) {
        //             take = 1 + dp[i + 1][i + 1];
        //         }

        //         dp[i][prev_ind + 1] = max(take, notTake);
        //     }
        // }

        // return dp[0][0];
        //the above tabulation can be made into space optimization with curr & prev
        // vector<int> front(n + 1, 0),curr(n+1,0);
        // for (int i = n - 1; i >= 0; i--) {
        //     for (int prev_ind = i - 1; prev_ind >= -1; prev_ind--) {

        //         int notTake = front[prev_ind + 1];

        //         int take = 0;
        //         if (prev_ind == -1 || nums[i] > nums[prev_ind]) {
        //             take = 1 + front[i + 1];
        //         }

        //         curr[prev_ind + 1] = max(take, notTake);
        //     }
        //     front.swap(curr);
        // }
        // return front[0];
        //another version of dp ,uses only 1 array
        // vector<int> dp(n,1);//dp[i]= LIS ending at index i, initially every element is a LIS so initialized with 1 
        
        // for(int i=1;i<n;++i){
        //     for(int j=0;j<i;++j){//check all prev elements
        //         if(nums[i]>nums[j]){
        //             dp[i]=max(dp[i],dp[j]+1);
        //         }
        //     }
        // }
        // return *max_element(dp.begin(),dp.end());

        //nlog(n) solution

        vector<int> temp;
        for(int i=0;i<n;++i){
            auto it=lower_bound(temp.begin(),temp.end(),nums[i]);
            if(it==temp.end()){
                temp.push_back(nums[i]);
            }
            else{
                *it=nums[i];
            }
        }
        return temp.size();
    }
};