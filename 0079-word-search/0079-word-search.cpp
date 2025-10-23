class Solution {
public:
    bool f(int ind,int i,int j,vector<vector<char>> &board,int n,int m,string &word,int len){
        if(ind==len){
            return true;
        }

        if(i<0 || j<0 || i==n ||j==m || board[i][j]=='$') return false;

        if(word[ind]==board[i][j]){
            char c=board[i][j];
            board[i][j]='$';
            bool down=f(ind+1,i+1,j,board,n,m,word,len);
            bool up=f(ind+1,i-1,j,board,n,m,word,len);
            bool left=f(ind+1,i,j-1,board,n,m,word,len);
            bool right=f(ind+1,i,j+1,board,n,m,word,len);
            board[i][j]=c;
            return left || right ||up||down;
        }

        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();++i){
            for(int j=0;j<board[0].size();++j){
                if(f(0,i,j,board,board.size(),board[0].size(),word,word.size())){
                    return true;
                }
            }
        }
        return false;
    }
};