class Solution {
public:
    int jump(vector<int>& nums) {
        //recursion, memoization, dp
        int n=nums.size();
        
        int l=0,r=0;
        int jumps=0;
        while(r<n-1){
            int farthest=0;
            for(int i=l;i<=r;++i){
                farthest=max(farthest,i+nums[i]);
            }
            if(farthest<=r){
                return -1;
            }
            l=r+1;
            r=farthest;
            jumps++;
        }
        return jumps;
    }
};