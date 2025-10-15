class Solution {
public:
    bool compare(string &word1,string &word2){
        if(word1.size()+1!=word2.size()) return false;
        int i=0;
        int j=0;
        while( j<word2.size()){
            if(i<word1.size() && word1[i]==word2[j]){
                j++;
                i++;
            }
            else{
                j++;
            }
        }
        if(i==word1.size() && j==word2.size()) return true;
        return false;
    }
    
    static bool comp(string &word1,string &word2){
        if(word1.size()<word2.size()) return true;
        return false;
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(),words.end(),comp);
        int n=words.size();
        vector<int> dp(n,1);//dp[i]= LIS ending at index i, initially every element is a LIS so initialized with 1 
        int maxi=0;
        for(int i=0;i<n;++i){
            for(int j=0;j<i;++j){//check all prev elements
                if(compare(words[j],words[i])==true && dp[j]+1>dp[i]){
                    dp[i]=dp[j]+1;
                }
            }
            maxi=max(dp[i],maxi);
        }
        return maxi;
    }
};