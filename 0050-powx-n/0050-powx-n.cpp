class Solution {
public:
    double myPow(double x, int n) {
    long long nn=n;
    if(nn<0) nn=-nn;
    double ans=1.0;
    while(nn){
        if(nn%2==1){
            ans*=x;
            nn--;
        }
        else{
            x=x*x;
            nn/=2;
        }
    }
    if(n<0) return 1.0/ans;
    else return ans;
}

};