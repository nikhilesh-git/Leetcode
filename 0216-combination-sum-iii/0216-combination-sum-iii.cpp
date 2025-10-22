class Solution {
public:
    void f(int i,int k,int n,vector<int> &subset,vector<vector<int>> &res,vector<int> &nums){
        if(n<0 || k<0){
            return;
        }
        if(i==9){
            if(n==0 && k==0){
                res.push_back(subset);
            }
            return;
        }

        if(nums[i]<=n){
            subset.push_back(nums[i]);
            f(i+1,k-1,n-nums[i],subset,res,nums);
            subset.pop_back();
        }
        f(i+1,k,n,subset,res,nums);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> res;
        vector<int> subset;
        f(0,k,n,subset,res,nums);
        return res;
    }
};