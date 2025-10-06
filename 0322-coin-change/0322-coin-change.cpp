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


        //tabulation using n+1 rows
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

        //tabulation using n rows
        // vector<vector<int>> dp(n, vector<int>(amount + 1, INT_MAX - 1));
        // // Base case: 0 amount requires 0 coins
        // for (int i = 0; i < n; ++i)
        //     dp[i][0] = 0;
        // // Base case for first coin type
        // for (int j = 0; j <= amount; ++j) {
        //     if (j % coins[0] == 0)
        //         dp[0][j] = j / coins[0];
        // }
        // // DP transition
        // for (int i = 1; i < n; ++i) {
        //     for (int j = 1; j <= amount; ++j) {
        //         int notTake = dp[i - 1][j];
        //         int take = INT_MAX - 1;
        //         if (coins[i] <= j) {
        //             take = 1 + dp[i][j - coins[i]];
        //         }
        //         dp[i][j] = min(take, notTake);
        //     }
        // }

        // int ans = dp[n - 1][amount];
        // return (ans >= INT_MAX - 1) ? -1 : ans;


        //space optimization
        // vector<int> curr(amount+1);
        // vector<int> prev(amount+1,INT_MAX-1);
        // prev[0]=0;
        // for(int i=1;i<=n;++i){
        //     curr[0]=0;
        //     for(int j=1;j<=amount;++j){
        //         int notTake=prev[j];
        //         int take=INT_MAX-1;
        //         if(coins[i-1]<=j){
        //             take=1+curr[j-coins[i-1]];
        //         }
        //         curr[j]=min(take,notTake);
        //     }
        //     prev.swap(curr);
        // }
        // return prev[amount]==INT_MAX-1?-1:prev[amount];


        //space optimization using one array
        vector<int> dp(amount + 1, INT_MAX - 1);
        dp[0] = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = coins[i]; j <= amount; ++j) {
                dp[j] = min(dp[j], 1 + dp[j - coins[i]]);
            }
        }

        return (dp[amount] == INT_MAX - 1) ? -1 : dp[amount];
    }
};