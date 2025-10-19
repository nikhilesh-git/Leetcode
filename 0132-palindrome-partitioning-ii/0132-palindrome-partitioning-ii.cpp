class Solution {
public:
    bool isPalindrome(int i,int j,string &s){
        int start=i;
        int end=j;
        while(start<=end){
            if(s[start]!=s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    int f(int i,string &s,vector<int> &dp){
        if(i==s.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int mini=1e9;
        for(int j=i;j<s.size();++j){
            if(isPalindrome(i,j,s)){
                mini=min(mini,1+f(j+1,s,dp));
            }           
        }
        return dp[i]=mini;
    }
    int minCut(string s) {
        int n=s.size();
        vector<int> dp(n,-1);
        return f(0,s,dp)-1;
    }
};