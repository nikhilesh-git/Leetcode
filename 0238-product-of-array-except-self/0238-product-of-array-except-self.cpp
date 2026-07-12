class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n);
        res[0]=1;
        int temp=1;
        for(int i=0;i<n;++i){
            
            if(i>0){
                res[i]=temp;
            }

            temp*=nums[i];
        }
        temp=1;
        for(int i=n-1;i>=0;--i){
            
            if(i<n-1){
                res[i]*=temp;
            }

            temp*=nums[i];
        }
        return res;
    }
};