class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> mpp(3,-1);
        int l=0,r=0;
        int res=0;
        int n=s.size();
        for(int i=0;i<n;++i){
            mpp[s[i]-'a']=i;
            int min_index=*min_element(mpp.begin(),mpp.end());
            if(min_index!=-1){
                res+=min_index+1;
            }
        }
        return res;
    }
};