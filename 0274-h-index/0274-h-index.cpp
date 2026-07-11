class Solution {
public:
    int isPossible(int h,vector<int> &citations){
        int count=0;
        for(int i=0;i<citations.size();++i){
            if(citations[i]>=h){
                count++;
            }

            if(count>=h) return true;
        }

        return false;
    }
    int hIndex(vector<int>& citations) {
        int low=1;
        int high=citations.size();
        int mid,ans=0;
        while(low<=high){
            mid=(high+low)/2;
            if(isPossible(mid,citations)){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
};