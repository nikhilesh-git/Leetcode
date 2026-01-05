class Solution {
public:
    static bool cmp(const vector<int> &a,const vector<int> &b){
        return a[1]<b[1];
    } 
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),cmp);
        int n=intervals.size();
        int count=0;
        int endingInterval=intervals[0][1];//previous ending interval to compare with current start interval to check for overlap
        for(int i=1;i<n;++i){
            if(intervals[i][0]<endingInterval){
                count++;
            }
            else{
                endingInterval=intervals[i][1];
            }
        }
        return count;
    }
};