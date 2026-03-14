class Solution {
public:
    int dx[4]={-1,0,0,1};
    int dy[4]={0,1,-1,0};
    bool isvalid(int x,int y,int n,int m){
        return x>=0 && y>=0 && x<n && y<m;
    }
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
        vector<vector<int>> minEffort(n,vector<int>(m,INT_MAX));
        pq.push({0,{0,0}});
        minEffort[0][0] = 0;
        
        while(!pq.empty()){
            int x=pq.top().second.first;
            int y=pq.top().second.second;
            int effort=pq.top().first;
            pq.pop();
            if(effort>minEffort[x][y]) continue;
            if(x==n-1 && y==m-1) return minEffort[x][y];
            for(int i=0;i<4;++i){
                int newx=x+dx[i];
                int newy=y+dy[i];
                if(isvalid(newx,newy,n,m)){
                    int newEffort=max(effort,abs(heights[newx][newy]-heights[x][y]));
                    if(newEffort<minEffort[newx][newy]){
                        pq.push({newEffort,{newx,newy}});
                        minEffort[newx][newy]=newEffort;
                    }                    
                }
            }
        }
        return -1;
    }
};