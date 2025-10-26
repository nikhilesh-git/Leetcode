class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow case explicitly
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        bool sign = true;
        if ((dividend < 0 && divisor >= 0) || (dividend >= 0 && divisor < 0))
            sign = false;

        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);
        long long quotient = 0;

        while (n >= d) {
            int cnt = 0;
            while (n >= (d << (cnt + 1))) cnt++;
            n -= d << cnt;
            quotient += 1LL << cnt;
        }

        if (!sign) quotient = -quotient;

        if (quotient > INT_MAX) return INT_MAX;
        if (quotient < INT_MIN) return INT_MIN;

        return (int)quotient;
    }
};
