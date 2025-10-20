class Solution {
public:
    int minAddToMakeValid(string str) {
        int open=0;
        int count=0;
        for(char c:str){
            if(c=='('){
                open++;
            }
            else{
                if(open!=0 ){
                    open--;
                }
                else{
                    count++;
                }
            }
        }
        return count+open;
    }
};