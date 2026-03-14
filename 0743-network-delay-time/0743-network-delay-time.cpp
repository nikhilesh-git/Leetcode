class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        n++;
        vector<vector<pair<int,int>>> adj(n);
        for(auto &it:times){
            adj[it[0]].push_back({it[1],it[2]});
        }
        // Create a set ds for storing the nodes as a pair {dist,node}
            // where dist is the distance from source to the node.
            // set stores the nodes in ascending order of the distances.
            set<pair<int, int>> st; 

            // Initialising dist list with a large number to
            // indicate the nodes are unvisited initially.
            // This list contains distance from source to the nodes.
            vector<int> dist(n, 1e9); 

            // Insert the source node with a distance of 0.
            st.insert({0, k}); 

            // Source initialised with dist = 0
            dist[k] = 0;

            // Traverse the graph until the set is empty
            while(!st.empty()) {
                // Extract the node with the minimum distance
                auto it = *(st.begin()); 
                int node = it.second; 
                int dis = it.first; 
                st.erase(it); 

                // Check for all adjacent nodes of the extracted node
                for(auto it : adj[node]) {
                    int adjNode = it.first;  // Adjacent node
                    int edgW = it.second;     // Weight of the edge
                    
                    // If the new distance is smaller, update it
                    if(dis + edgW < dist[adjNode]) {
                        // Erase the previous entry of the adjacent node
                        // if it was visited previously with a larger cost.
                        if(dist[adjNode] != 1e9) 
                            st.erase({dist[adjNode], adjNode}); 

                        // Update the distance for the adjacent node
                        dist[adjNode] = dis + edgW; 

                        // Insert the adjacent node with the updated distance into the set
                        st.insert({dist[adjNode], adjNode}); 
                    }
                }
            }

            // Return the list containing shortest distances
            // from source to all the nodes.
            int minTime=0;
            for(int i=1;i<n;++i){
                minTime=max(minTime,dist[i]);
            }
            if(minTime==1e9) return -1;
            return minTime;
    }
};