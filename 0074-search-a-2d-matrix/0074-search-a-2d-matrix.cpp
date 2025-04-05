class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();

        int start=0,end=m-1,mid=0;
        while(start<=end){
            mid=(start+end)/2;
            if(matrix[mid][0]==target){
                return true;
            }
            else if(matrix[mid][0]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        int index=start-1;
        if(index<0){
            index=0;
        }
        start=0,end=n-1;
        while(start<=end){
            mid=(start+end)/2;
            if(matrix[index][mid]==target){
                return true;
            }
            else if(matrix[index][mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};