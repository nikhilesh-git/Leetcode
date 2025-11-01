class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> res;
        int i = 0;

        while (i < asteroids.size()) {
            if (asteroids[i] > 0) {
                st.push(asteroids[i]);
            } 
            else {
                // Handle collisions
                while (!st.empty() && st.top() < abs(asteroids[i])) {
                    st.pop();
                }

                if (!st.empty() && st.top() == abs(asteroids[i])) {
                    st.pop(); // both destroy each other
                } 
                else if (st.empty()) {
                    res.push_back(asteroids[i]); // negative survives
                }
            }
            i++;
        }

        // Now add surviving positive asteroids from stack to res (in correct order)
        // Since stack stores them from left to right, we need them reversed
        // We'll reverse the portion we append, without extra array
        int count = st.size();
        res.resize(res.size() + count);
        for (int j = res.size() - 1; j >= 0 && !st.empty(); --j) {
            res[j] = st.top();
            st.pop();
        }

        return res;
    }
};