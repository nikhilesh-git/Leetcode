class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();

        int low=1,high=*max_element(nums.begin(),nums.end());
        int mid,res;
        while(low<=high){
            mid=(low+high)/2;
            int count=0;
            for(int i=0;i<n;++i){
                count+=ceil(nums[i]/(double)mid);
            }
            if(count<=threshold){
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