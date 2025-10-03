class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid[0].size();
        int m=grid.size();
        vector<int> prev(n+1,INT_MAX);
        vector<int> curr(n+1);
        for(int i=1;i<=m;++i){
            curr[0]=INT_MAX;
            for(int j=1;j<=n;++j ){
                if(i==1 && j==1){
                    curr[j]=grid[i-1][j-1];
                }
                else{
                    curr[j]=grid[i-1][j-1]+min(curr[j-1],prev[j]);
                }
                
            }
            prev=curr;
        }
        return prev[n];
    }
};