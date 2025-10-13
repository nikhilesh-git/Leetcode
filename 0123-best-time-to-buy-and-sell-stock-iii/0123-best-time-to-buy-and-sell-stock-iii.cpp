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
        vector<vector<vector<int>>> dp(prices.size()+1,vector<vector<int>>(2,vector<int>(3,-1)));
        return func(0,1,prices,cap,dp);
    }
};