class Solution {
public:

    // recurison with memoization
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
        //vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        
        //memoization
        // int res=func(n,amount,coins,dp);
        // if(res==INT_MAX-1){
        //     return -1;
        // }
        // return res;


        //tabulation
        // vector<vector<int>> dp(n+1,vector<int>(amount+1,INT_MAX-1));
        // for(int i=0;i<=n;++i){
        //     dp[i][0]=0;// if 
        // }


        // for(int i=1;i<=n;++i){
        //     for(int j=1;j<=amount;++j){
        //         int notTake=dp[i-1][j];
        //         int take=INT_MAX-1;
        //         if(coins[i-1]<=j){
        //             take=1+dp[i][j-coins[i-1]];
        //         }
        //         dp[i][j]=min(take,notTake);
        //     }
        // }
        // return dp[n][amount]==INT_MAX-1?-1:dp[n][amount];

        //space optimization
        vector<int> curr(amount+1);
        vector<int> prev(amount+1,INT_MAX-1);
        prev[0]=0;
        for(int i=1;i<=n;++i){
            curr[0]=0;
            for(int j=1;j<=amount;++j){
                int notTake=prev[j];
                int take=INT_MAX-1;
                if(coins[i-1]<=j){
                    take=1+curr[j-coins[i-1]];
                }
                curr[j]=min(take,notTake);
            }
            prev.swap(curr);
        }
        return prev[amount]==INT_MAX-1?-1:prev[amount];
    }
};