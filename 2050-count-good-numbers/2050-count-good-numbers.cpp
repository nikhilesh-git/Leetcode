class Solution {
public:
    long power(long power,long long base){
        long long res=1;
        int mod=1000000007;
        while(power>0){
            if(power%2==1){
                res=(res*base)%mod;
            }
            base=(base*base)%mod;
            power/=2;
        }   
        return res;
    }
    int countGoodNumbers(long long n) {
        return (power((n+1)/2,5)*power((n)/2,4))%1000000007;
    }
};