class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int zeroes=0;
        int maxi=0;

        //(2N) approach
        // while(i<n){
        //     if(nums[i]==0){
        //         zeroes++;
        //     }

        //     while(zeroes>k){
        //         if(nums[j]==0){
        //             zeroes--;
        //         }
        //         j++;
        //     }
        //     maxi=max(maxi,i-j+1);
        //     i++;
        // }

        //O(N)
        while(i<n){
            if(nums[i]==0){
                zeroes++;
            }

            if(zeroes<=k){
                maxi=max(maxi,i-j+1);
            }
            else{
                if(nums[j]==0){
                    zeroes--;
                }
                j++;
            }
            i++;
        }
        return maxi;
    }
};