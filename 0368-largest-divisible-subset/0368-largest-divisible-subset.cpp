class Solution {
public:
    
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> dp(n,1),hash(n);//dp[i]= LIS ending at index i, initially every element is a LIS so initialized with 1 
        
        int max_index=0,maxi=0;
        for(int i=0;i<n;++i){
            hash[i]=i;
            for(int j=0;j<i;++j){//check all prev elements
                if(nums[i]%nums[j]==0){
                    if(dp[j]+1>dp[i]){
                        dp[i]=dp[j]+1;
                        hash[i]=j;
                    }
                }
            }
            if(dp[i]>maxi){
                maxi=dp[i];
                max_index=i;
            }
        }
        vector<int> res(maxi);
        int i=max_index;
        res[--maxi]=nums[i];
        while(hash[i]!=i){
            i=hash[i];
            res[--maxi]=nums[i];
            
        };
        return res;
    }
};