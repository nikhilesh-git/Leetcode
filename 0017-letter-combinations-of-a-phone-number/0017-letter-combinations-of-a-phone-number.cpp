class Solution {
public:
    void func(vector<string> &res,string s,string digits,int n,int i,unordered_map<char,vector<char>> &mpp){
        if(i==n){
            res.push_back(s);
            return;
        }

        for(char ch:mpp[digits[i]]){
            s.push_back(ch);
            func(res,s,digits,n,i+1,mpp);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        unordered_map<char,vector<char>> mpp;
        mpp['2']={'a','b','c'};
        mpp['3']={'d','e','f'};
        mpp['4']={'g','h','i'};
        mpp['5']={'j','k','l'};
        mpp['6']={'m','n','o'};
        mpp['7']={'p','q','r','s'};
        mpp['8']={'t','u','v'};
        mpp['9']={'w','x','y','z'};
        vector<string> res;
        string s;
        func(res,s,digits,digits.size(),0,mpp);
        return res;
    }
};