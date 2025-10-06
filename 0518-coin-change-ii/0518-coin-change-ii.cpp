class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<unsigned long long> prev(amount + 1, 0), curr(amount + 1, 0);

        // Base case: 0 amount has 1 way (take nothing)
        prev[0] = 1;

        for (int i = 0; i < n; ++i) {  // iterate over coins
            curr[0] = 1;  // 0 amount always has 1 way
            for (int j = 1; j <= amount; ++j) {
                unsigned long long notTake = prev[j];   // ways without using current coin
                unsigned long long take = 0;
                if (j >= coins[i]) {
                    take = curr[j - coins[i]];  // ways including current coin
                }
                curr[j] = notTake + take;
            }
            prev.swap(curr);  // move current row to previous for next coin
        }

        return prev[amount];
    }
};