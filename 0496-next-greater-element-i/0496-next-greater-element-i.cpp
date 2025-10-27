class Solution {
public:

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res(nums1.size());
        stack<int> s;
        unordered_map<int,int> mpp;

        for(int i=0;i<nums1.size();++i){
            mpp[nums1[i]]=i;
        }
        for(int i=nums2.size()-1;i>=0;--i){
            

            while(!s.empty() && s.top()<nums2[i]){
                s.pop();
            }
           
            if(mpp.find(nums2[i])!=mpp.end()){
                int idx=mpp[nums2[i]];
                if(s.empty()){
                    res[idx]=-1;
                }
                else {
                    res[idx]=s.top();
                }
            }
            s.push(nums2[i]);
        }
 
        return res;
    }
};