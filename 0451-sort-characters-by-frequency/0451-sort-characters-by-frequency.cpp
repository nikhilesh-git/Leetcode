class Solution {
public:
    static bool comparator(pair<char,int> &a,pair<char,int> &b){
        return a.second>b.second;
    }
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        string res="";
        for(int i=0;i<s.size();++i){
            mpp[s[i]]++;
        }
        vector<pair<char,int>> vec(mpp.begin(),mpp.end());
        sort(vec.begin(),vec.end(),comparator);

        for(auto &it:vec){
            while(it.second--){
                res.push_back(it.first);
            }
            
        }
        return res;
    }
};