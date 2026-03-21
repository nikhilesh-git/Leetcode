class DisjointSet{
    vector<int> parent,size;
public:
    DisjointSet(int n){
        size.resize(n+1,1);
        parent.resize(n+1);
        for(int i=0;i<=n;++i){
            parent[i]=i;
        }
    }

    int findUPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findUPar(parent[node]);
    }

    void unionBySize(int u,int v){
        int ulp_u=findUPar(u);
        int ulp_v=findUPar(v);
        if(ulp_u==ulp_v) return;
        
        if(size[ulp_u]<size[ulp_v]){
            parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
        }
        else{
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v];
        }
    }
};

class Solution {
public:

    int makeConnected(int n, vector<vector<int>>& connections) {
        //we need atleast n-1 edges to connect all nodes inthe graph
        if(connections.size()<n-1) return -1;
        DisjointSet ds(n);
        for(auto& connection:connections){
            int u=connection[0];
            int v=connection[1];
            ds.unionBySize(u,v);
        }
        unordered_set<int> components;
        for(int i=0;i<n;++i){
            components.insert(ds.findUPar(i));
        }
        return components.size()-1;
    }
};