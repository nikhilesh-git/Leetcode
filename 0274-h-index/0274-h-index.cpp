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
        // int low=1;
        // int high=citations.size();
        // int mid,ans=0;
        // while(low<=high){
        //     mid=(high+low)/2;
        //     if(isPossible(mid,citations)){
        //         ans=mid;
        //         low=mid+1;
        //     }
        //     else{
        //         high=mid-1;
        //     }
        // }
        // return ans;
        //TC:O(NlogN), SC:O(1)

        int n=citations.size();
        vector<int> bucket(n+1,0);
        for(int i=0;i<n;++i){
            if(citations[i]>n){
                bucket[n]++;
            }
            else{
                bucket[citations[i]]++;
            }
            
        }
        int papers=0;
        for(int i=n;i>=0;--i){
            papers+=bucket[i];
            if(papers>=i){
                return i;
            }
        }
        return 0;
    }
};