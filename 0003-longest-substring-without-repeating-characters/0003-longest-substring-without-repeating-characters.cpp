class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> myset;
        int i=0;
        int j=0;
        int maxi=0;
        while(i<s.size()&& j<s.size()){
            if(myset.find(s[i])==myset.end()){
                
                myset.insert(s[i]);
                int len =myset.size(); 
                maxi=max(maxi,len);
                
                i++;
            }
            else{
                myset.erase(s[j]);
                j++;
            } 

        }
        return maxi;
    }
};