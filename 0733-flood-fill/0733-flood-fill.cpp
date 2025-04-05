class Solution {
public:
    struct node{
        int x;
        int y;
    };
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool isvalid(int x,int y,vector<vector<int>> &image){
        int n=image.size();
        int m=image[0].size();
        return (x>=0 && y>=0 && x<n && y<m);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int startx=sr,starty=sc;
        int originalcolor=image[startx][starty];
        if(originalcolor==color){
            return image;
        }
        queue<node> q;
        q.push({startx,starty});
        image[startx][starty]=color;
        while(!q.empty()){
            node current=q.front();
            q.pop();
            for(int i=0;i<4;++i){
                int newx=current.x+dx[i];
                int newy=current.y+dy[i];
                if(isvalid(newx,newy,image) && image[newx][newy]==originalcolor){
                    image[newx][newy]=color;
                    q.push({newx,newy});
                }
            }
        }
        return image;
        
    }
};