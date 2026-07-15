class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> myStr(numRows);
        int k=0;
        int flag=1;
        for(int i=0;i<s.size();++i){
            myStr[k].push_back(s[i]);
            if(k==0)flag=1;
            if(k==numRows-1)flag=0;

            if(flag==0)k--;
            if(flag==1)k++;
        }
        string res="";
        for(string str:myStr){
            res+=str;
        }
        return res;
    }
};