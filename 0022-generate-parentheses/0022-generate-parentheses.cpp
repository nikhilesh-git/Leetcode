class Solution {
public:
    void func(vector<string> &res,string s,int n,int openBrackets,int count){
        if(openBrackets>n ||count<0){
            return;
        }
        if(count==0 && openBrackets==n ){
            res.push_back(s);
            return;
        }

        
        s.push_back('(');
        func(res,s,n,openBrackets+1,count+1);
        s.pop_back();
        s.push_back(')');
        func(res,s,n,openBrackets,count-1);
    }
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string> res;
        func(res,s,n,0,0);
        return res;
    }
};