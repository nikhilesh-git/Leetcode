class Solution {
public:
    int longestPalindromeSubseq(string s) {
        vector<int> prev(s.size()+1,0);
        vector<int> curr(s.size()+1);
        string s2=s;
        reverse(s2.begin(),s2.end());
        for(int i=1;i<=s.size();++i){
            curr[0]=0;
            for(int j=1;j<=s.size();++j){
                if(s[i-1]==s2[j-1]){
                    curr[j]=1+prev[j-1];
                }
                else{
                    curr[j]=max(curr[j-1],prev[j]);
                }
            }
            prev.swap(curr);
        }
        return prev[s.size()];
    }
};