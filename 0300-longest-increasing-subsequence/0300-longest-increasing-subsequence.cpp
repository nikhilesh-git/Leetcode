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
        vector<vector<int>> dp(n,vector<int>(n+1,-1));
        return f(0,-1,nums,dp);
        // vector<int> dp(n,1);//dp[i]= LIS ending at index i, initially every element is a LIS so initialized with 1 
        
        
        // for(int i=1;i<n;++i){
        //     for(int j=0;j<i;++j){//check all prev elements
        //         if(nums[i]>nums[j]){
        //             dp[i]=max(dp[i],dp[j]+1);
        //         }
        //     }
        // }
        // return *max_element(dp.begin(),dp.end());
    }
};