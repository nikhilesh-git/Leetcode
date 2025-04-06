class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        int ans[2]={0,0};
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        for(int i=0;i<n-1;++i){
            dp[i][i]=true;
            if(s[i]==s[i+1]){
                dp[i][i+1]=true;
                ans[0]=i;
                ans[1]=i+1;
            }
        }
        dp[n-1][n-1]=true;
        for(int i=2;i<=n-1;++i){
            for(int j=0;j<n-i;j++){
                int k=i+j;
                if(s[j]==s[k] && dp[j+1][k-1]){
                    dp[j][k]=true;
                    ans[0]=j;
                    ans[1]=k;
                }
            }
        }
        return s.substr(ans[0],ans[1]-ans[0]+1);
    }
};