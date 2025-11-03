class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        if(k==n){
            return "0";
        }
        vector<char> st;
        int i;
        
        for( i=0;i<n;++i){
            while(k!=0 && !st.empty() && st.back()>num[i]){
                st.pop_back();
                k--;
            }
            st.push_back(num[i]);
        }
        string s="";

        for(int j=0;j<st.size() -k;++j){
            s.push_back(st[j]);
        }

        while(s[0]=='0'){
            s.erase(s.begin());
        }
        if(s==""){
            s="0";
        }
        return s;
    }
};