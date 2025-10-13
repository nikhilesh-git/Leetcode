class Solution {
public:
    int f(int i,int buy,int cooldown,vector<int> &prices,vector<vector<vector<int>>> &dp){
        if(i==prices.size()) return 0;

        if(dp[i][buy][cooldown]!=-1) return dp[i][buy][cooldown];
        if(buy==1 && cooldown==0){
            return dp[i][buy][cooldown]=max(-prices[i]+f(i+1,0,0,prices,dp),f(i+1,1,0,prices,dp));
        }
        else if(buy==1 && cooldown==1){
            return dp[i][buy][cooldown]=f(i+1,1,0,prices,dp);
        }
        else{
            return dp[i][buy][cooldown]=max(prices[i]+f(i+1,1,1,prices,dp),f(i+1,0,0,prices,dp));
        }
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        //memoization
        // vector<vector<vector<int>>> dp(n,vector<vector<int>> (2,vector<int>(2,-1)));
        // return f(0,1,0,prices,dp);

        //tabulation
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>> (2,vector<int>(2)));
        for(int buy=0;buy<=1;++buy){
            for(int cooldown=0;cooldown<=1;++cooldown){
                dp[n][buy][cooldown]=0;
            }
        }

        for(int i=n-1;i>=0;--i){
            for(int buy=0;buy<=1;++buy){
                for(int cooldown=0;cooldown<=1;++cooldown){
                    if(buy==1 && cooldown==0){
                        dp[i][buy][cooldown]=max(-prices[i]+dp[i+1][0][0],dp[i+1][1][0]);
                    }
                    else if(buy==1 && cooldown==1){
                        dp[i][buy][cooldown]=dp[i+1][1][0];
                    }
                    else{
                        dp[i][buy][cooldown]=max(prices[i]+dp[i+1][1][1],dp[i+1][0][0]);
                    }
                }
            }
        }
        return dp[0][1][0];
    }
};