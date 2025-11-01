class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> res;
        int i=0;
        while(i<asteroids.size()){
            if(asteroids[i]>0){
                st.push(asteroids[i]);
            }
            else{
                while(!st.empty() && st.top()<abs(asteroids[i])){
                    st.pop();
                }

                if(!st.empty() && st.top()==abs(asteroids[i])){
                    st.pop();
                }
                else if(st.empty()){
                    res.push_back(asteroids[i]);
                }

            }
            i++;
        }
        vector<int> arr;
        while(!st.empty()){
            arr.push_back(st.top());
            st.pop();
        }
        for(int i=arr.size()-1;i>=0;--i){
            res.push_back(arr[i]);
        }
        return res;
    }
};