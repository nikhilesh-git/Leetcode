class DisjointSet {
    vector<int> rank, parent;
public:
    DisjointSet(int n) {
        rank.resize(n + 1, 0);
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

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u);
        int ulp_v = findUPar(v);
        if (ulp_u == ulp_v) return;
        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};

class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        vector<vector<string>> res;
        unordered_map<string,int> mpp;
        int n=accounts.size();
        DisjointSet ds(n);
        for(int i=0;i<accounts.size();++i){
            for(int j=1;j<accounts[i].size();++j){
                if(mpp.find(accounts[i][j])!=mpp.end()){
                    ds.unionByRank(i,mpp[accounts[i][j]]);
                }
                else{
                    mpp[accounts[i][j]]=i;
                }
            }
        }
        vector<string> mergedMail[n];
        for(auto it:mpp){
            string mail=it.first;
            int account=ds.findUPar(it.second);
            mergedMail[account].push_back(mail);
        }

        for(int i=0;i<n;++i){
            if(mergedMail[i].empty()) continue;

            sort(mergedMail[i].begin(),mergedMail[i].end());
            res.push_back({accounts[i][0]});
            for(string s:mergedMail[i]){
                res[res.size()-1].push_back(s);
            }
        }
        return res;
    }
};