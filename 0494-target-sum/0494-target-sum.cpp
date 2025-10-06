class Solution {
public:
int countPartitions(vector<int>& arr, int d) {
        // Code here
        int n=arr.size();
        int sum=accumulate(arr.begin(),arr.end(),0);
        
        if(sum-d<0 || (sum-d)%2==1) return 0;
        int target=(sum-d)/2;
        vector<vector<int>> dp(n,vector<int>(target+1,0));
        
        
        dp[0][0]=1;
        
        if (arr[0] <= target) dp[0][arr[0]]+= 1;

        for(int i=1;i<n;++i){
            for(int sum=0;sum<=target;++sum){
                int notTake=dp[i-1][sum];
                int take=0;
                if(arr[i]<=sum){
                    take=dp[i-1][sum-arr[i]];
                }
                dp[i][sum]=take+notTake;
            }
        }
        return dp[n-1][target];
        
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return countPartitions(nums,target);
    }
};