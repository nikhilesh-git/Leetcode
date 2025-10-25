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
        //recursion
        // vector<vector<int>> res;
        // vector<int> subset;
        // f(0,nums,res,subset,nums.size());
        // return res;

        //power set
        vector<vector<int>> res;

        int subsets=1<<nums.size();//total possible subsets = 2^n
        for(int num=0;num<subsets;++num){
            vector<int> arr;
            for(int i=0;i<nums.size();++i){
                if(num & 1<<i){//if ith bit is1 , then add it to res
                    arr.push_back(nums[i]);
                }
            }
            res.push_back(arr);
        }
        return res;
    }
    
};