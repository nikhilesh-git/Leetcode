class RandomizedSet {
public:
    vector<int> arr;
    unordered_map<int,int> index;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(index.count(val)){
            return false;
        }
        arr.push_back(val);
        index[val]=arr.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(index.count(val)==0){
            return false;
        }
        index[arr.back()]=index[val];
        swap(arr[index[val]],arr.back());
        arr.pop_back();
        index.erase(val);
        return true;
    }
    
    int getRandom() {
        random_device rd;
        mt19937 gen(rd());  

        uniform_int_distribution<int> dist(0, arr.size() - 1);

        return arr[dist(gen)];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */