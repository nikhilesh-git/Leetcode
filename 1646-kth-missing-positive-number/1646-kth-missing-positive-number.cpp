class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if(k<arr[0]) return k;
        int low=0,high=arr.size()-1,mid;
        int res;
        while(low<=high){
            mid=(low+high)/2;
            int missing=arr[mid]-(mid + 1);
            if(missing < k){
                res=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return arr[res]+(k-(arr[res]-(res + 1)));
    }
};