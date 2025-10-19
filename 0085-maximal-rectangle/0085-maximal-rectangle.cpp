class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxi=0;
        for(int i=0;i<heights.size();++i){
            if(st.empty() || heights[i]>heights[st.top()]){
                st.push(i);

            }
            else{
                while(!st.empty()  && heights[st.top()]>=heights[i]){
                    int curr_index=st.top();
                    st.pop();
                    int pse_index;
                    if(st.empty()){
                        pse_index=-1;
                    }
                    else{
                        pse_index=st.top();
                    }
                    maxi=max(maxi,heights[curr_index]*(i-pse_index-1));
                    
                }
                st.push(i);
            }
        }

        int nse_index=heights.size();
        while(st.size()){
            int curr_index=st.top();
            st.pop();
            int pse_index;
            if(st.empty()){
                pse_index=-1;
            }
            else{
                pse_index=st.top();
            }
            maxi=max(maxi,heights[curr_index]*(nse_index-pse_index-1));
        }
        return maxi;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int r=matrix.size();
        int c=matrix[0].size();
        int maxi=0;
        vector<int> dp(c,0);
        for(int i=0;i<r;++i){
            for(int j=0;j<c;++j){
                dp[j]=matrix[i][j]=='0'?0:dp[j]+1;
            }
            maxi=max(maxi,largestRectangleArea(dp));
        }
        return maxi;
    }
};