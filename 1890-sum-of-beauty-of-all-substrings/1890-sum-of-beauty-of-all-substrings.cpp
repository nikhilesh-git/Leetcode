class Solution {
public:
    int beautySum(string s) {
        int res = 0;
        int n = s.size();
        
        for (int i = 0; i < n; i++) {
            vector<int> freq(26, 0);  // reset for each new start
            
            for (int j = i; j < n; j++) {
                freq[s[j] - 'a']++;
                
                int maxFreq = INT_MIN, minFreq = INT_MAX;
                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        maxFreq = max(maxFreq, freq[k]);
                        minFreq = min(minFreq, freq[k]);
                    }
                }
                
                res += (maxFreq - minFreq);
            }
        }
        
        return res;
    }
};
