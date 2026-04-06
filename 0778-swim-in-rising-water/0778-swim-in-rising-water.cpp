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
    bool isValid(int r,int c,int n){
        return r>=0 && r<n && c>=0 && c<n;
    }
    typedef pair<int, pair<int, int>> ppi; // {distance, {row, col}} 
    vector<int> dr={1,-1,0,0},dc={0,0,1,-1};
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        // Distance matrix initialized to infinity
        vector<vector<int>> visited(n, vector<int>(n, 0));

        // Min-priority queue: stores {distance, {row, col}}
        priority_queue<ppi, vector<ppi>, greater<ppi>> pq;
        pq.push({grid[0][0],{0,0}});
        vector<vector<int>> dist(n,vector<int>(n,INT_MAX));
        visited[0][0]=1;
        int max_elevation=0;
        while(!pq.empty()){
            int elevation=pq.top().first;
            int r=pq.top().second.first;
            int c=pq.top().second.second;
            max_elevation=max(max_elevation,elevation);
            pq.pop();

            if(r==n-1 && c==n-1){
                return max_elevation;
            }
            for(int i=0;i<4;++i){
                int adjR=r+dr[i];
                int adjC=c+dc[i];
                if(isValid(adjR,adjC,n) && !visited[adjR][adjC]){
                    pq.push({grid[adjR][adjC],{adjR,adjC}});
                    visited[adjR][adjC]=1;
                }
            }

        }
        return -1;
    }
};