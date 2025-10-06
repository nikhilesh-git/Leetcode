class Solution {
public:
int countPartitions(vector<int>& arr, int d) {
        // Code here
        int n=arr.size();
        int sum=accumulate(arr.begin(),arr.end(),0);
        
        if(sum-d<0 || (sum-d)%2==1) return 0;
        int target=(sum-d)/2;
        vector<int> prev(target+1,0),curr(target+1);
        
        
        prev[0]=1;
        
        if (arr[0] <= target) prev[arr[0]]+= 1;

        for(int i=1;i<n;++i){

            for(int sum=0;sum<=target;++sum){
                int notTake=prev[sum];
                int take=0;
                if(arr[i]<=sum){
                    take=prev[sum-arr[i]];
                }
                curr[sum]=take+notTake;
            }
            prev.swap(curr);
        }
        return prev[target];
        
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        //same code as dp 17
        return countPartitions(nums,target);
    }
};