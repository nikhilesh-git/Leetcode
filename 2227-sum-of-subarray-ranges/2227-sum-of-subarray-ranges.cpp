class Solution {
public:
    long long subArrayRanges(vector<int>& arr) {
        int n=arr.size();
        stack<int> st;  
        vector<int> nse_idx(n);
        for(int i=n-1;i>=0;--i){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            nse_idx[i]=st.empty()?n:st.top();
            st.push(i);
        }
        st={};
        vector<int> pse_idx(n);
        for(int i=0;i<n;++i){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }
            pse_idx[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        st={};
        vector<int> nge_idx(n);
        for(int i=n-1;i>=0;--i){
            while(!st.empty() && arr[st.top()]<arr[i]){
                st.pop();
            }
            nge_idx[i]=st.empty()?n:st.top();
            st.push(i);
        }
        st={};
        vector<int> pge_idx(n);
        for(int i=0;i<n;++i){
            while(!st.empty() && arr[st.top()]<=arr[i]){
                st.pop();
            }
            pge_idx[i]=st.empty()?-1:st.top();
            st.push(i);
        }
        long long  res=0;
        for(int i=0;i<n;++i){
            int no_of_pse=i- pse_idx[i];
            int no_of_nse=nse_idx[i]-i;

            int no_of_pge=i- pge_idx[i];
            int no_of_nge=nge_idx[i]-i;

            res=res-1LL*no_of_pse*no_of_nse*arr[i];
            res=res+1LL*no_of_pge*no_of_nge*arr[i];
        }
        return res;
    }
};