class Solution {
public:
    struct Node{
        int x;
        int y;
    };
    bool isvalid(int x,int y,int n,int m){
        return (x>=0 && y>=0 && x<m && y<n);
    }

    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};

    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid[0].size();
        int m=grid.size();
        queue<Node> q;
        int oranges_count=0;
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                if(grid[i][j]==2){
                    oranges_count++;
                    q.push({i,j});
                }
                else if(grid[i][j]==1){
                    oranges_count++;
                }
            }
        }

        if(q.empty() && oranges_count==0){
            return 0;
        }
        int oranges_rotten=q.size();
        int flag;
        int minutes=0;
        while(!q.empty()){
            flag=0;
            int len=q.size();
            for(int k=0;k<len;++k){
                Node curr=q.front();
                q.pop();
                for(int i=0;i<4;++i){
                    int newx=curr.x+dx[i];
                    int newy=curr.y+dy[i];
                    if(isvalid(newx,newy,n,m) && grid[newx][newy]==1){
                        flag=1;
                        grid[newx][newy]=2;
                        q.push({newx,newy});
                        oranges_rotten++;
                    }

                }
            }
            if(flag==1){
                minutes++;
            }
            
        }
        if(oranges_count!=oranges_rotten){
            return -1;
        }
        return minutes;

    }
};