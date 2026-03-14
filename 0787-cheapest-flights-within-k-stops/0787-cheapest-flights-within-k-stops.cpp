class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> adj(n);
        for(auto &it:flights){
            adj[it[0]].push_back({it[1],it[2]});
        }
        vector<int> dist(n,INT_MAX);
         //(dist,node,no of stops)
        queue<pair<int,pair<int,int>>> q;
        dist[src]=0;
        q.push({0,{src,0}});
        while(!q.empty()){
            int u=q.front().second.first;
            int stops=q.front().second.second;
            int d=q.front().first;

            q.pop();
            if(stops>k) continue;
            
            for(auto it:adj[u]){
                int v=it.first;
                int wt=it.second;
                if(d+wt<dist[v] && stops<=k){
                    dist[v]=d+wt;
                    q.push({dist[v],{v,stops+1}});
                }
            }
        }
        if(dist[dst]==INT_MAX) return -1;

        return dist[dst];
    }
};