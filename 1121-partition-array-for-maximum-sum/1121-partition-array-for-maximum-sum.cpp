class Solution {
public:
    int f(int i,vector<int> &arr,int n,int k,vector<int> &dp){
        if(i==n){
            return 0;
        }
        if(dp[i]!=-1) return dp[i];
        int maxi=0;
        int maxEl=0;
        for(int j=i;j<min(i+k,n);++j){
            maxEl=max(maxEl,arr[j]);
            maxi=max(maxi,maxEl*(j+1-i)+f(j+1,arr,n,k,dp));
        }
        return dp[i]=maxi;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int> dp(arr.size(),-1);
        return f(0,arr,arr.size(),k,dp);
    }
};