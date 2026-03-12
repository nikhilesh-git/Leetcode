class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<vector<int>> adjT(V);
        for(int u=0;u<V;++u){
            for(int v:graph[u]){
                adjT[v].push_back(u);
            }
        }
        vector<int> topo;
        vector<int> indegree(V,0);
        for(int i=0;i<V;++i){
            for(int u:adjT[i]){
                indegree[u]++;
            }
        }
        queue<int> q;
        for(int i=0;i<V;++i){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int u=q.front();
            q.pop();
            topo.push_back(u);
            for(int v:adjT[u]){
                indegree[v]--;
                if(indegree[v]==0){
                    q.push(v);
                }
            }
            
        }
        sort(topo.begin(),topo.end());
        return topo;

    }
};