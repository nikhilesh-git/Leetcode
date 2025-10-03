class Solution {
public:
    // int find(int m,int n,vector<vector<int>> &dp){
    //     if(m<0 || n<0){
    //         return 0;
    //     }   
    //     if(m==0 && n==0) return 1;
    //     if(dp[m][n]!=-1) return dp[m][n];
    //     int up=find(m-1,n,dp);
    //     int left=find(m,n-1,dp);
    //     return dp[m][n]=up+left;
    // }

    int uniquePaths(int m, int n) {
        //vector<vector<int>> dp(m,vector<int>(n,-1));
        // return find(m-1,n-1,dp);
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        for(int i=1;i<=m;++i){
            for(int j=1;j<=n;++j){
                if(i==1&& j==1){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
        }
        return dp[m][n];
    }
};