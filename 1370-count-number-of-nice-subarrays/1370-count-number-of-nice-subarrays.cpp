class Solution {
public:
    int numSubarraysWithAtMost(vector<int> &nums,int goal){
        if(goal<0) return 0;
        int sum=0;
        int start=0,end=0;
        int res=0;
        int n=nums.size();
        while(end<n){
            sum+=(nums[end]&1)==1?1:0;
            while(sum>goal){
                sum=sum-((nums[start]&1)==1?1:0);
                start++;
            }

            res+=(end-start+1);
            end++;
        }
        return res;
    }
    int numberOfSubarrays(vector<int>& nums, int goal) {
        
        return numSubarraysWithAtMost(nums,goal)-numSubarraysWithAtMost(nums,goal-1);
        
    }
};