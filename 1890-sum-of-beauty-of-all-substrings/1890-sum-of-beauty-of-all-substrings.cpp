class Solution {
public:
    int beautySum(string s) {
        int res=0;
        vector<int> prefix(26,0);
        for(int i=0;i<s.size();++i){
            for(int j=i;j<s.size();++j){
                for(int k=i;k<=j;++k){
                    prefix[s[k]-'a']++;
                }
                int maxFreq=INT_MIN,minFreq=INT_MAX;
                for(int l=0;l<26;++l){
                    if(prefix[l]!=0 &&prefix[l]<minFreq){
                        minFreq=prefix[l];
                    }
                    if(prefix[l]>maxFreq){
                        maxFreq=prefix[l];
                    }
                    prefix[l]=0;
                }
                res+=maxFreq-minFreq;
            }
        }
        return res;
    }
};