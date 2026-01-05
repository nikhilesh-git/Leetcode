class Solution {
public:
    int candy(vector<int>& ratings) {
        int i=1,count=1;
        int n=ratings.size();
        while(i<n){
            if(ratings[i]==ratings[i-1]){
                i++;
                count++;
            }
            int peak=1;
            while(i<n && ratings[i]>ratings[i-1]){
                peak++;
                count+=peak;
                
                i++;
            }
            int down=1;
            while(i<n && ratings[i]<ratings[i-1]){
                
                count+=down;
                down++;
                i++;
            }
            if(down>peak){
                count=count+(down-peak);
            }
        }      
        return count;
    }
};