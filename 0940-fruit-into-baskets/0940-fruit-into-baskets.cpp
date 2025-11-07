
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mpp;
        int start=0,end=0;
        int fruit1count=0,fruit2count=0;
        int maxi=0;
        while(end<fruits.size()){
            if(mpp.size()<2 || mpp.find(fruits[end])!=mpp.end()){
                mpp[fruits[end]]++;
                
            }
            else if(mpp.find(fruits[end])==mpp.end()){
                while(start<fruits.size() && mpp.size()>=2){
                    mpp[fruits[start]]--;
                    if(mpp[fruits[start]]==0){
                        mpp.erase(fruits[start]);
                    }
                    start++;
                }
                mpp[fruits[end]]++;
            }
            maxi=max(maxi,end-start+1);
            end++;
            
        }

        return maxi;
    }
};