class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> mat(n,vector<int>(n,INT_MAX));
        for(auto it:edges){
            mat[it[0]][it[1]]=it[2];
            mat[it[1]][it[0]]=it[2];
        }
        for(int k=0;k<n;++k){
            for(int i=0;i<n;++i){
                for(int j=0;j<n;++j){
                    if(mat[i][k]==INT_MAX || mat[k][j]==INT_MAX){
                        continue;
                    }

                    mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
                }
            }
        }
        int min_cities_reachable=INT_MAX;
        int city_with_min_cities_reachable;
        for(int i=0;i<n;++i){
            int cities_reachable=0;
            for(int j=0;j<n;++j){
                if(i!=j && mat[i][j]<=distanceThreshold){
                    cities_reachable++;
                }
            }
            if(cities_reachable<=min_cities_reachable){
                min_cities_reachable=cities_reachable;
                city_with_min_cities_reachable=i;
            }
        }
        return city_with_min_cities_reachable;
    }
};