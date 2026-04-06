class DisjointSet {
    
public:
    vector<int> size, parent;
    DisjointSet(int n) {
        size.resize(n + 1, 1);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v;
            size[ulp_v]+=size[ulp_u];
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
    }
};



class Solution {
public:
    int isValid(int r,int c,int n){
        return r>=0 && r<n && c>=0 && c<n;
    }
    int largestIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        
        vector<int> dr={0,0,-1,1};
        vector<int> dc={1,-1,0,0};

        DisjointSet ds(n*n);
        /* add initial islands to 
        the disjoint set data structure */
        for(int row=0;row<n;++row){
            for(int col=0;col<n;++col){
                if(grid[row][col]==0){
                    continue;
                }

                for(int i=0;i<4;++i){
                    int adjRow=row+dr[i];
                    int adjCol=col+dc[i];

                    if(isValid(adjRow,adjCol,n) && grid[adjRow][adjCol]==1){
                        int nodeNo=row*n+col;
                        int adjNodeNo=adjRow*n+adjCol;

                        if(ds.findUPar(nodeNo)!=ds.findUPar(adjNodeNo)){
                            ds.unionBySize(nodeNo,adjNodeNo);
                        }
                    }
                }

            }
        }

        int maxSize=0;
        for(int row=0;row<n;++row){
            for(int col=0;col<n;++col){
                if(grid[row][col]==0){
                    set<int> components;
                    for(int i=0;i<4;++i){
                        int adjRow=row+dr[i];
                        int adjCol=col+dc[i];

                        if(isValid(adjRow,adjCol,n) && grid[adjRow][adjCol]==1){
                            int adjNodeNo=adjRow*n+adjCol;
                            components.insert(ds.findUPar(adjNodeNo));
                        }
                    }
                    int newSize=0;
                    for(auto it:components){
                        newSize+=ds.size[it];
                    }
                    maxSize=max(maxSize,newSize+1);
                }
            }
        }

        //edge case
        maxSize=max(maxSize,ds.size[ds.findUPar(0)]);

        return maxSize;
    }
};