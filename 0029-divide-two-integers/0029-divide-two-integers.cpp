class Solution {
public:
    int divide(int dividend, int divisor) {
         if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        // Work in long long to avoid overflow
        long long a = llabs((long long)dividend);
        long long b = llabs((long long)divisor);
        long long res = 0;

        while (a >= b) {
            long long temp = b;
            long long multiple = 1;

            while ((temp << 1) <= a) {
                temp <<= 1;
                multiple <<= 1;
            }

            a -= temp;
            res += multiple;
        }

        // Apply sign in long long, then safely cast to int
        bool same_sign = (dividend < 0) == (divisor < 0);
        res = same_sign ? res : -res;

        return (int)res;
    }
};