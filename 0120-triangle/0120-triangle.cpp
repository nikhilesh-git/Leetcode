class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> prev = triangle[0];
        vector<int> curr; // reuse the same vector

        for (int i = 1; i < n; ++i) {
            int k = triangle[i].size();
            curr.resize(k);
            for (int j = 0; j < k; ++j) {
                if (j == 0) curr[j] = triangle[i][j] + prev[j];
                else if (j == k - 1) curr[j] = triangle[i][j] + prev[j - 1];
                else curr[j] = triangle[i][j] + min(prev[j], prev[j - 1]);
            }
            prev.swap(curr); // no copy, just pointer swap
        }
        return *min_element(prev.begin(), prev.end());

    }
};