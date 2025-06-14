class Solution {

public:
    void compute_matrix(vector<vector<int>> &arr,int n,char *dir,int *num,int *i,int *j){
        while (*num<=n*n) {
            if (arr[*i][*j] != 0) break;

            arr[*i][*j] = (*num)++;
            
            if (*dir == 'r') {
                (*j)++;
                if (*j == n || arr[*i][*j] != 0) {
                    *dir = 'd';
                    (*j)--; (*i)++;
                }
            }
            else if (*dir == 'd') {
                (*i)++;
                if (*i == n || arr[*i][*j] != 0) {
                    *dir = 'l';
                    (*i)--; (*j)--;
                }
            }
            else if (*dir == 'l') {
                (*j)--;
                if (*j == -1 || arr[*i][*j] != 0) {
                    *dir = 'u';
                    (*j)++; (*i)--;
                }
            }
            else { // *dir == 'u'
                (*i)--;
                if (*i == -1 || arr[*i][*j] != 0) {
                    *dir = 'r';
                    (*i)++; (*j)++;
                }
            }
        }
        
    }
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> arr(n,vector<int>(n,0));

        char dir='r';
        int num=1,i=0,j=0;
        compute_matrix(arr,n,&dir,&num,&i,&j);
        return arr;
    }
};