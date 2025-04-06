class Solution {
public:
    int uniquePaths(int m, int n) {
        double res=1;
        for(int i=1;i<=(m-1);++i){
            res=res*((m+n-2)-(m-1) + i)/i;
        }
        return (int)res;
    }
};