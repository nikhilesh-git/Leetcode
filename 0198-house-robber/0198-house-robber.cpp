class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();

        int curr=nums[0],prev1=nums[0],prev2;

        for(int i=1;i<n;++i){
            if(i==1){
                curr=max(curr,nums[1]);
            }
            else{
                curr=max(prev2+nums[i],prev1);
            }
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};