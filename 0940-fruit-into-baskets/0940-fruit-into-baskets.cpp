
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mpp;
        int start=0,end=0;
        int maxi=0;
        // while(end<fruits.size()){
        //     mpp[fruits[end]]++;
        //     if(mpp.size()>2){
        //         while(mpp.size()>2){
        //             mpp[fruits[start]]--;
        //             if(mpp[fruits[start]]==0){
        //                 mpp.erase(fruits[start]);
        //             }
        //             start++;
        //         }
        //     }

        //     maxi=max(maxi,end-start+1);
        //     end++;            
        // }

        while(end<fruits.size()){
            mpp[fruits[end]]++;
            if(mpp.size()<=2){
                maxi=max(maxi,end-start+1);
            }
            else{
                mpp[fruits[start]]--;
                if(mpp[fruits[start]]==0){
                    mpp.erase(fruits[start]);
                }
                start++;
            }
            
            end++;            
        }
        return maxi;
    }
};