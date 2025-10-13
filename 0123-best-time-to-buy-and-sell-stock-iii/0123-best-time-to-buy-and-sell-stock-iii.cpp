class Solution {
public:
    int func(int i,int buy,vector<int> &prices,int cap,vector<vector<vector<int>>> &dp){
        
        if(i==prices.size() || cap==0) return 0;
        if(dp[i][buy][cap]!=-1) return dp[i][buy][cap];
        if(buy==1){
            return dp[i][buy][cap]=max(-prices[i]+func(i+1,0,prices,cap,dp),func(i+1,1,prices,cap,dp));
        }        
        else{
            return dp[i][buy][cap]=max(prices[i]+func(i+1,1,prices,cap-1,dp),func(i+1,0,prices,cap,dp));
        }
    }
    int maxProfit(vector<int>& prices) {
        int cap=2;
        int n=prices.size();
        //memoiaztion
        // vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,vector<int>(3,-1)));
        // return func(0,1,prices,cap,dp);

        //tabulation
        // vector<vector<vector<int>>> dp(prices.size()+1,vector<vector<int>>(2,vector<int>(4)));
        // for(int buy=0;buy<=1;++buy){
        //     for(int cap=0;cap<=1;++cap){
        //         dp[n][buy][cap]=0;
        //     }
        // }

        // for(int i=0;i<=n;++i){
        //     for(int buy=0;buy<=1;++buy){
        //         dp[i][buy][0]=0;
        //     }
        // }
        // for(int i=n-1;i>=0;--i){
        //     for(int buy=0;buy<=1;++buy){
        //         for(int cap=2;cap>=1;--cap){
        //             if(buy==1){
        //             dp[i][buy][cap]=max(-prices[i]+dp[i+1][0][cap],dp[i+1][1][cap]);
        //         }        
        //         else{
        //             dp[i][buy][cap]=max(prices[i]+dp[i+1][1][cap-1],dp[i+1][0][cap]);
        //         }
        //         }
        //     }
        // }
        // return dp[0][1][2];

        vector<vector<int>> next(2,vector<int>(4,0)),curr(2,vector<int>(4));
        

        
        for(int i=n-1;i>=0;--i){
            for(int buy=0;buy<=1;++buy){
                curr[buy][0]=0;
                for(int cap=2;cap>=1;--cap){
                    if(buy==1){
                    curr[buy][cap]=max(-prices[i]+next[0][cap],next[1][cap]);
                }        
                else{
                    curr[buy][cap]=max(prices[i]+next[1][cap-1],next[0][cap]);
                }
                }
            }
            curr.swap(next);
        }
        return next[1][2];
    }
};