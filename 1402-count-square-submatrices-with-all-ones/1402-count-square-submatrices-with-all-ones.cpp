class Solution {
public:
    
    int countSquares(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();

        vector<vector<int>> dp(r,vector<int>(c,0));
        for(int i=0;i<r;++i){
            dp[i][0]=matrix[i][0];
        }

        for(int j=0;j<c;++j){
            dp[0][j]=matrix[0][j];
        }
        
        for(int i=1;i<r;++i){
            for(int j=1;j<c;++j){
                if(matrix[i][j]==0) dp[i][j]=0;
                else dp[i][j]=1+min(dp[i-1][j],min(dp[i][j-1],dp[i-1][j-1]));
            }
        }
        int count=0;
        for(int i=0;i<r;++i){
            for(int j=0;j<c;++j){
                count+=dp[i][j];
            }
        }
        return count;
    }
};