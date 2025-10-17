class Solution {
public:
    int f(int i,int j,vector<int> &cuts,vector<vector<int>> &dp){
        if(j<i) return 0;
        int mini=1e9;
        if(dp[i][j]!=-1) return dp[i][j];
        for(int k=i;k<=j;++k){
            mini=min(mini,cuts[j+1]-cuts[i-1] + f(i,k-1,cuts,dp)+f(k+1,j,cuts,dp));
        }
        return dp[i][j]=mini;
    }
    int minCost(int n, vector<int>& cuts) {
        int c=cuts.size();
        sort(cuts.begin(),cuts.end());
        cuts.push_back(n);
        cuts.insert(cuts.begin(),0);
        vector<vector<int>> dp(c+1,vector<int>(c+1,-1));
        return f(1,c,cuts,dp);
    }
};