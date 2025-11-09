class Solution {
public:
    int numSubarraysWithSumLessthanorEqualto(vector<int> &nums,int goal){
        if(goal<0) return 0;
        int sum=0;
        int start=0,end=0;
        int res=0;
        int n=nums.size();
        while(end<n){
            sum+=nums[end];
            while(sum>goal){
                sum=sum-nums[start];
                start++;
            }

            res+=(end-start+1);
            end++;
        }
        return res;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        return numSubarraysWithSumLessthanorEqualto(nums,goal)-numSubarraysWithSumLessthanorEqualto(nums,goal-1);
        
    }
};