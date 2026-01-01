class Solution {
public:
    bool checkValidString(string s) {
        int mini=0,maxi=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='('){
                mini+=1;
                maxi+=1;
            }
            else if(s[i]==')'){
                mini-=1;
                if(mini<0) mini=0;
                maxi-=1;
                if(maxi<0){
                    return false;
                }
            }
            else{
                mini=mini-1;
                if(mini<0) mini=0;
                maxi=maxi+1;
            }
        }
        cout<<mini<<' '<<maxi;
        if(mini==0){
            return true;
        }
        return false;
    }
};