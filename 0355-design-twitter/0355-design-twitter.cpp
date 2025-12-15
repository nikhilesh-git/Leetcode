class Twitter {
public:
int t;
unordered_map<int,set<int>> users;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> feed;
int maxSize;
vector<int> feedRes;
unordered_map<int,vector<pair<int,int>>> tweets;
    Twitter() {
        t=0;
        maxSize=10;
    }
    
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({t,tweetId});
        t++;
    }
    
    vector<int> getNewsFeed(int userId) {
        feedRes={};
        for(auto it:tweets[userId]){
            if(feed.size()>=maxSize){
                feed.pop();
            }
            feed.push(it);
        }

        for(int user:users[userId]){
            for(auto it:tweets[user]){
                if(feed.size()>=maxSize){
                    feed.pop();
                }
                feed.push(it);
            }
        }

        while(!feed.empty()){
            auto it=feed.top();
            feed.pop();
            int tweetId=it.second;
            feedRes.push_back(tweetId);
        }
        reverse(feedRes.begin(),feedRes.end());
        return feedRes;
    }
    
    void follow(int followerId, int followeeId) {
        users[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        users[followerId].erase(followeeId);
    }
};
/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */