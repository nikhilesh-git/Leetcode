class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,max_len=0;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==0){
                max_len=max(max_len,count);
                count=0;
            }
            else{
                count++;
            }
            
        }
        max_len=max(max_len,count);
        return max_len;
    }
};