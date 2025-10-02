class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];
        if(n==2) return max(nums[1],nums[0]);

        int p2 = nums[0];                 // max money up to house 0
        int p1 = max(nums[0], nums[1]);   // max money up to house 1


        int q2=nums[1];
        int q1=max(nums[1],nums[2]);


        for (int i = 2; i < n; i++) {
            if(i!=n-1){
                int c1 = max(p1, p2 + nums[i]);
                p2 = p1;
                p1 = c1;
            }
            if(i!=2){
                int c2=max(q1,q2+nums[i]);
                q2=q1;
                q1=c2;
            }
            
        }

        return max(p1,q1);
    }
};
