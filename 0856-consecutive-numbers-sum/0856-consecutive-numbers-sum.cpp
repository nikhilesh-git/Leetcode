class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int count=0;
        for(long long k=1;k<sqrt(2*n);++k){
            if(k*(k-1)/2 < n && (n-(k*(k-1))/2)%k==0){
                count++;
            }
        }
        return count;
    }
};