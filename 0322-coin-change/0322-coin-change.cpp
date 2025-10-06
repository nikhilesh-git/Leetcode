class Solution {
public:
    int func(int n,int amount,vector<int> &coins,vector<vector<int>> &dp){
        
        if(amount==0) return 0;
        if(n==0) return INT_MAX-1;

        if(dp[n-1][amount]!=-1) return dp[n-1][amount];
        int notTake=func(n-1,amount,coins,dp);
        int take=INT_MAX-1;
        if(amount>=coins[n-1]){
            take=func(n,amount-coins[n-1],coins,dp)+1;
        }
        return dp[n-1][amount]=min(take,notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        //dp[i][j]=number of coins required using first i coins to get amount j
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        
        int res=func(n,amount,coins,dp);
        if(res==INT_MAX-1){
            return -1;
        }
        return res;

        // for(int i=0;i<amount;++i){
        //     dp[0][i]=-1;
        // }
        // for(int i=1;i<n;++i){
        //     for(int j=1;j<=n;++j){
        //         dp[i][j]=min()
        //     }
        // }
    }
};