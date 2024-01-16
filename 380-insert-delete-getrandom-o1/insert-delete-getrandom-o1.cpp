class RandomizedSet {
public:
unordered_set<int>set;
    RandomizedSet() {}
    
    bool insert(int val) {
        if(set.find(val)!=set.end())
        return 0;

        set.insert(val);
        return 1;
    }
    
    bool remove(int val) {
        if(set.find(val)==set.end())
        return 0;

        set.erase(val);
        return 1;
    }
    
    int getRandom() {
        auto x = set.begin();
        int r = rand()%(set.size());
        while(r--) (x++);
        return *x;
    }
};