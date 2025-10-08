class Solution {
public:
    int func(int i,int j1,int j2,int m,int n,vector<vector<int>> &grid,vector<vector<vector<int>>> &dp){
        if(i<0 ||i>=n ||j1<0||j1>=m || j2<0 || j2>=m) return 0;

        if(i==n-1){
            return j1==j2?grid[i][j1]:grid[i][j1]+grid[i][j2];
        }

        if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
        int maxi=0;
        vector<int> dj={-1,0,1};
        for(int dj1:dj){
            for(int dj2:dj){
                
                if(j1==j2){
                    maxi=max(maxi,grid[i][j1]+func(i+1,j1+dj1,j2+dj2,m,n,grid,dp));
                }
                else{
                    maxi=max(maxi,grid[i][j1]+grid[i][j2]+func(i+1,j1+dj1,j2+dj2,m,n,grid,dp));
                }
            }
        }
        return dp[i][j1][j2]=maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(m,-1)));
        return func(0,0,m-1,m,n,grid,dp);
    }
};