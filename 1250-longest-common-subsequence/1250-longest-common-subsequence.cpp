class Solution {
public:
    int func(int i,int j,string &text1,string &text2,vector<vector<int>> &dp){
        if(i<0 || j<0) return 0;

        if(dp[i][j]!=-1) return dp[i][j];
        int res=0;
        if(text1[i]==text2[j]){
            res= 1+func(i-1,j-1,text1,text2,dp);
        }
        else{
            res=max(func(i-1,j,text1,text2,dp),func(i,j-1,text1,text2,dp));
        }
        return dp[i][j]=res;
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        //memoization
        // vector<vector<int>> dp(text1.size(),vector<int>(text2.size(),-1));
        // return func(text1.size()-1,text2.size()-1,text1,text2,dp);

        //tabulation
        // vector<vector<int>> lcs(text1.size()+1,vector<int>(text2.size()+1,0));


        // for(int i=1;i<=n;++i){
        //     for(int j=1;j<=m;++j){
        //         if(text1[i-1]==text2[j-1]){
        //             lcs[i][j]=1+lcs[i-1][j-1];
        //         }
        //         else{
        //             lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
        //         }
        //     }
        // }
        // return lcs[n][m];

        //space optimization
        vector<int> prev(text2.size()+1,0);
        vector<int> curr(text2.size()+1);

        for(int i=1;i<=text1.size();++i){
            curr[0]=0;
            for(int j=1;j<=text2.size();++j){
                if(text1[i-1]==text2[j-1]){
                    curr[j]=1+prev[j-1];
                }
                else{
                    curr[j]=max(curr[j-1],prev[j]);
                }
            }
            prev.swap(curr);
        }
        return prev[text2.size()];
    }
};