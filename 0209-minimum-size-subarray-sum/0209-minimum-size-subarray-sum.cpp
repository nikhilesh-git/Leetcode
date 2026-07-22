class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,n=nums.size();
        int i=0,j=0,min_length=n+1;
        while(i<n){
            sum+=nums[i];
            while(sum>=target){
                min_length=min(min_length,i-j+1);
                sum-=nums[j];
                j++;
                
            }
            i++;
        }
        return min_length==n+1?0:min_length;
    }
};