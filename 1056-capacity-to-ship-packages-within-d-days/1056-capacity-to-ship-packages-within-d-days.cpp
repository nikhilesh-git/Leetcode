class Solution {
public:
    bool isPossible(int cap,vector<int> &weights,int days,int n){
        int sum=0,count=0;
        for(int i=0;i<n;++i){
            sum+=weights[i];
            if((i!=n-1 && sum+weights[i+1]>cap) || (i==n-1 && sum<=cap)){
                count++;
                sum=0;
            }
        }
        if(count<=days) return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end()),high=INT_MAX;
        int mid,res;
        while(low<=high){
            mid=low+(high-low)/2;
            if(isPossible(mid,weights,days,weights.size())){
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
};