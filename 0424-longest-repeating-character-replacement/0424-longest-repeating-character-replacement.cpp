class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> mpp(26,0);
        int start=0, end=0;
        int maxfreq=0,maxlen=0;
        // O(2N*26)
        // while(end<s.size()){
        //     mpp[s[end]-'A']++;
        //     maxfreq=max(maxfreq,mpp[s[end]-'A']);
        //     while((end-start+1)-maxfreq >k){
        //         mpp[s[start]-'A']--;
        //         start++;
        //         maxfreq=*max_element(mpp.begin(),mpp.end());
        //     }
            
        //     maxlen=max(maxlen,end-start+1);
        //     end++;
        // }

        //O(N)
        while(end<s.size()){
            mpp[s[end]-'A']++;
            maxfreq=max(maxfreq,mpp[s[end]-'A']);
            if((end-start+1)-maxfreq >k){
                mpp[s[start]-'A']--;
                start++;
            }
            
            maxlen=max(maxlen,end-start+1);
            end++;
        }
        return maxlen;
    }
};