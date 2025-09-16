class Solution {
public:
    int countHomogenous(string s) {
        if(s.size()==1) return 1;
        long long count=1;
        long long res=0;
        for(int i=1;i<s.size();++i){

            
            if(s[i]!=s[i-1]){
                res+=(count*(count+1))/2;
                res%=(int)1e9+7;
                count=1;
                
            }
            else{
                count++;
            }
            if(i==s.size()-1){
                res+=((count+1)*(count))/2;
                res%=(int)1e9+7;
            }

        }
        return res;
    }
};