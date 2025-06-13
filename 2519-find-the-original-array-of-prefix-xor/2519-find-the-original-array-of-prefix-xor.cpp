class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> res(pref.size());
        for(int i=0;i<pref.size();++i){
            if(i==0){
                res[i]=pref[i];
            }
            else{
                res[i]=pref[i]^pref[i-1];
            }
        }
        return res;
    }
};