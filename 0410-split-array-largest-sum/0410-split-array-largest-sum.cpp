class Solution {
public:
    bool isPossible(int mid,int k,vector<int> &nums){
        int count=1,sum=0;
        for(int i=0;i<nums.size();++i){
            if (sum + nums[i] > mid) {
                count++;
                sum = nums[i];
                if (count > k) return false;
            } else {
                sum += nums[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(), nums.end()),high=accumulate(nums.begin(),nums.end(),0),mid,res;
        while(low<=high){
            mid=(low+high)/2;
            if(isPossible(mid,k,nums)){
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
                
            }
        }
        return res;
    }
};