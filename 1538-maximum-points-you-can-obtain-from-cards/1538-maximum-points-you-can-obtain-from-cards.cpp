class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int maxi=0;
        int leftSum=0;
        int rightSum=0;
        for(int i=0;i<k;++i){
            leftSum+=cardPoints[i];
        }
        int l=k-1;
        int r=n-1;
        maxi=leftSum;
        while(k--){
            leftSum-=cardPoints[l];
            rightSum+=cardPoints[r];
            maxi=max(leftSum+rightSum,maxi);
            l--;
            r--;
        }
        return maxi;
    }
};