class Solution {
public:
    double myPow(double x, int n) {
    if (n == 0) return 1;

    // Handle negative exponent
    long long N = n; // Use long long to handle INT_MIN
    if (N < 0) {
        x = 1 / x;
        N = -N;
    }

    double result = 1;
    while (N > 0) {
        if (N % 2 == 1) {
            result *= x;
        }
        x *= x;
        N /= 2;
    }

    return result;
}

};