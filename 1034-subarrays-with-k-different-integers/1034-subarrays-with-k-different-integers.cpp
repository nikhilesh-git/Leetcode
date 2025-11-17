class Solution {
public:
    int f(vector<int> &nums,int k){
        if(k==0)return 0;
        int n=nums.size();
        int l=0;
        int r=0;
        unordered_map<int,int> mpp;
        int res=0;
        while(r<n){
            mpp[nums[r]]++;
            while(mpp.size()>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0){
                    mpp.erase(nums[l]);
                }
                l++;
            }
            
            res=res+r-l+1;
            r++;
        }
 
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        return f(nums,k)-f(nums,k-1);
    }
};