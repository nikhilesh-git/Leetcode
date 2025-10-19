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
        //memo
        // vector<int> dp(n,-1);
        // return f(0,s,dp)-1;

        //tabu
        // vector<int> dp(n+1,0);
        // for(int i=n-1;i>=0;--i){
        //     int mini=1e9;
        //     for(int j=i;j<s.size();++j){
        //         if(isPalindrome(i,j,s)){
        //             mini=min(mini,1+dp[j+1]);
        //         }           
        //     }
        //     dp[i]=mini;
        // }
        // return dp[0]-1;

        vector<vector<bool>> isPal(n, vector<bool>(n, false));
        vector<int> dp(n, 0);

        // Step 1: Precompute palindrome table
        for (int i = n - 1; i >= 0; --i) {
            for (int j = i; j < n; ++j) {
                if (s[i] == s[j] && (j - i <= 2 || isPal[i + 1][j - 1])) {
                    isPal[i][j] = true;
                }
            }
        }

        // Step 2: DP to compute min cuts
        for (int i = 0; i < n; ++i) {
            if (isPal[0][i]) {
                dp[i] = 0; // no cut needed if whole prefix is palindrome
            } else {
                dp[i] = i; // max cuts possible (cut between every char)
                for (int j = 0; j < i; ++j) {
                    if (isPal[j + 1][i]) {
                        dp[i] = min(dp[i], dp[j] + 1);
                    }
                }
            }
        }

        return dp[n - 1];
    }
};