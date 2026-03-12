class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int V=numCourses;
        vector<vector<int>> adj(V);
        for(int i=0;i<prerequisites.size();++i){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int> topo;
        vector<int> indegree(V,0);
        for(int i=0;i<V;++i){
            for(int u:adj[i]){
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
            for(int v:adj[u]){
                indegree[v]--;
                if(indegree[v]==0){
                    q.push(v);
                }
            }
            
        }
        if(topo.size()==V){
            return topo;
        }
        return {};
    }
};