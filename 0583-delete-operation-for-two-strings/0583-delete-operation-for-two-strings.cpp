class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<int> prev(word2.size()+1,0);
        vector<int> curr(word2.size()+1);
        for(int i=1;i<=word1.size();++i){
            curr[0]=0;
            for(int j=1;j<=word2.size();++j){
                if(word1[i-1]==word2[j-1]){
                    curr[j]=1+prev[j-1];
                }
                else{
                    curr[j]=max(curr[j-1],prev[j]);
                }
            }
            prev.swap(curr);
        }
        return word1.size()+word2.size() - 2*prev[word2.size()];
    }
};