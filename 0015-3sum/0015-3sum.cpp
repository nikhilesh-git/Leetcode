class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;++i){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            int l=i+1;
            int r=n-1;
            int newSum=-nums[i];
            while(l<r){
                if(l!=i+1 && nums[l]==nums[l-1]){
                    l++;
                    continue;
                }
                if(nums[l]+nums[r]==newSum){
                    res.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                }
                else if(nums[l]+nums[r]>newSum) r--;
                else l++;
            }
        }
        return res;
    }
};