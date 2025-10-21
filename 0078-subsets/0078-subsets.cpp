class Solution {
public:
    void f(int i,vector<int> &nums,vector<vector<int>> &res,vector<int> &subset,int n){
        if(i==n){
            res.push_back(subset);
            return;
        }

        subset.push_back(nums[i]);
        f(i+1,nums,res,subset,n);
        subset.pop_back();
        f(i+1,nums,res,subset,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        f(0,nums,res,subset,nums.size());
        return res;
    }
};