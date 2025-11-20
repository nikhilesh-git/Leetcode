struct cmp {
    bool operator()(const pair<char,int>& a, const pair<char,int>& b) const {
        return a.second < b.second;   // max-heap based on frequency
    }
};

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int> mpp;
        for(char c:tasks){
            mpp[c]++;
        }
        priority_queue<pair<char,int>, vector<pair<char,int>>, cmp> pq;


        for(auto it:mpp){
            pq.push({it.first,it.second});
        }
        int time=0;
        queue<pair<char,pair<int,int>>> q;
        while(!pq.empty() || !q.empty()){
            if(!q.empty() && time==q.front().second.second){
                char task=q.front().first;
                int freq=q.front().second.first;
                q.pop();
                pq.push({task,freq});
            }
            if(!pq.empty()){
                auto temp=pq.top();
                pq.pop();
                char task=temp.first;
                int freq=temp.second;
                freq--;
                int nextAvailableTime=time+n+1;
                if(freq!=0){
                    q.push({task,{freq,nextAvailableTime}});
                }
            }
            time++;
        }
        return time;
    }
};