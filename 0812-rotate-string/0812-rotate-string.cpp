class Solution {
public:
    bool rotateString(string s, string goal) {
        if(goal.size()!=s.size()) return false;
        int n=s.size();
        for(int i=0;i<s.size();++i){
            int count=0;
            int j=0;
            while(s[(i+j)%n]==goal[j]){
                count++;
                j++;
                if(count==n)return true;
            }
        }
        return false;
    }
};