class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        if(n==1){
            return matrix[0][0];
        }
        if(n==2){
            return min(matrix[0][0],matrix[0][1])+min(matrix[1][0],matrix[1][1]);
        }
        vector<int> prev=matrix[0];
        vector<int> curr(n);
        for(int i=1;i<n;++i){

            for(int j=0;j<n;++j){
                if(j==0){
                    curr[j]=matrix[i][j]+min(prev[j],prev[j+1]);
                }
                else if(j==n-1){
                    curr[j]=matrix[i][j]+min(prev[j],prev[j-1]);
                }
                else{
                    curr[j]=matrix[i][j]+min(prev[j],min(prev[j-1],prev[j+1]));
                }
            }
            prev.swap(curr);
        }
        return *min_element(prev.begin(),prev.end());
    }
};