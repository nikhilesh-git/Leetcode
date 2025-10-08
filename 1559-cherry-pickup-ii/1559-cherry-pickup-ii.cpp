class Solution {
public:
    int func(int i, int j1, int j2, int n, int m, vector<vector<int>> &grid, vector<vector<vector<int>>> &dp) {
        // Out of bounds
        if (j1 < 0 || j2 < 0 || j1 >= m || j2 >= m) return -1e8;

        // Base case: last row
        if (i == n - 1) {
            if (j1 == j2) return grid[i][j1];
            else return grid[i][j1] + grid[i][j2];
        }

        if (dp[i][j1][j2] != -1) return dp[i][j1][j2];

        int maxi = -1e8;
        vector<int> dj = {-1, 0, 1};

        // Explore all 9 moves
        for (int d1 : dj) {
            for (int d2 : dj) {
                int value = 0;
                if (j1 == j2) value = grid[i][j1];
                else value = grid[i][j1] + grid[i][j2];
                value += func(i + 1, j1 + d1, j2 + d2, n, m, grid, dp);
                maxi = max(maxi, value);
            }
        }

        return dp[i][j1][j2] = maxi;
    }


    bool isValid(int i,int j1,int j2,int n,int m){
        return i>=0 && i<n && j1>=0 && j1<m && j2>=0 && j2<m;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        //memoization
        // vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m, -1)));
        // return func(0, 0, m - 1, n, m, grid, dp);

        //tabulation
        // vector<vector<vector<int>>> dp(n, vector<vector<int>>(m, vector<int>(m)));

        // for(int j1=0;j1<m;++j1){
        //     for(int j2=0;j2<m;++j2){
        //         dp[n-1][j1][j2]= j1==j2?grid[n-1][j1]:grid[n-1][j1]+grid[n-1][j2];
        //     }
        // }

        // vector<int> dj = {-1, 0, 1};
        // for(int i=n-2;i>=0;--i){
        //     for(int j1=0;j1<m;++j1){
        //         for(int j2=0;j2<m;++j2){
        //             int maxi=-1e8;
        //             for (int d1 : dj) {
        //                 for (int d2 : dj) {
                            
        //                         int value=0;
        //                         if (j1 == j2) value = grid[i][j1];
        //                         else value = grid[i][j1] + grid[i][j2];
                                
        //                         if(isValid(i+1,j1+d1,j2+d2,n,m)){
        //                             value += dp[i+1][j1+d1][j2+d2]; 
        //                         }
        //                         else{
        //                             value=-1e8;
        //                         }
        //                         maxi = max(maxi, value);
        //                 }
        //             }
        //             dp[i][j1][j2]=maxi;
        //         }
        //     }
        // }
        // return dp[0][0][m-1];


        //space optimization
        vector<vector<int>> front(m,vector<int>(m)),curr(m,vector<int>(m));
        

        for(int j1=0;j1<m;++j1){
            for(int j2=0;j2<m;++j2){
                front[j1][j2]= j1==j2?grid[n-1][j1]:grid[n-1][j1]+grid[n-1][j2];
            }
        }

        vector<int> dj = {-1, 0, 1};
        for(int i=n-2;i>=0;--i){
            for(int j1=0;j1<m;++j1){
                for(int j2=0;j2<m;++j2){
                    int maxi=-1e8;
                    for (int d1 : dj) {
                        for (int d2 : dj) {
                                int value=0;
                                if (j1 == j2) value = grid[i][j1];
                                else value = grid[i][j1] + grid[i][j2];
                                
                                if(isValid(i+1,j1+d1,j2+d2,n,m)){
                                    value += front[j1+d1][j2+d2]; 
                                }
                                else{
                                    value=-1e8;
                                }
                                maxi = max(maxi, value);
                        }
                    }
                    curr[j1][j2]=maxi;
                }
            }
            front=curr;
        }
        return front[0][m-1];
    }
};
