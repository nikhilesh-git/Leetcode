class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> prev=triangle[0];
        int n=triangle.size();
        for(int i=1;i<n;++i){
            int k=triangle[i].size();
            vector<int> curr(k);
            for(int j=0;j<k;++j){
                if(j==0){
                    curr[j]=triangle[i][j]+prev[j];
                }
                else if(j==k-1){
                    curr[j]=triangle[i][j]+prev[j-1];
                }
                else{
                    curr[j]=triangle[i][j]+min(prev[j],prev[j-1]);
                }
            }
            prev=curr;
        }
        return *min_element(prev.begin(),prev.end());
    }
};