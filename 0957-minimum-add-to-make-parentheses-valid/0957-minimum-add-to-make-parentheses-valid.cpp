class Solution {
public:
    int minAddToMakeValid(string str) {
        stack<int> s;
        int count=0;
        for(char c:str){
            if(c=='('){
                s.push(c);
            }
            else{
                if(!s.empty() && s.top()=='('){
                    s.pop();
                }
                else{
                    count++;
                }
            }
        }
        return count+s.size();
    }
};