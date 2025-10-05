class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2==1) return false;
        sum/=2;//whether there exists a subset of sum= sum(nums)/2
        vector<bool> prev(sum+1,0);
        vector<bool> curr(sum+1);
        prev[0]=1;
        if(nums[0]<=sum){
            prev[nums[0]]=1;
        }
        for(int i=1;i<nums.size();++i){
            curr[0]=true;
            for(int target=1;target<=sum;++target){
                bool notTake=prev[target];
                bool take=false;
                if(nums[i]<=target){
                    take=prev[target-nums[i]];
                }
                curr[target]=take ||notTake;
            }
            prev.swap(curr);
        }
        return prev[sum];
    }
};