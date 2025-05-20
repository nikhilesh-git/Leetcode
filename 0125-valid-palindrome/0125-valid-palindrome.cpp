class Solution {
public:
    bool isPalindrome(string s) {
        for (auto& x : s) {
            x = tolower(x);
        }
        int i=0,j=s.size()-1;
        while(i<=j){
            if(!(('a'<=s[i] && s[i]<='z') || ('0'<=s[i] && s[i]<='9'))){
                i++;
                continue;
            }
            if(!(('a'<=s[j] && s[j]<='z') || ('0'<=s[j] && s[j]<='9'))){
                j--;
                continue;
            }

            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};