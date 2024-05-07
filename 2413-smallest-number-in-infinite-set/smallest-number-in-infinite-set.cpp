class SmallestInfiniteSet {
public:
set<int>set;
    SmallestInfiniteSet() {
        for(int i=1;i<1001;i++)set.insert(i);
    }
    
    int popSmallest() {
        int x = *set.begin();
        set.erase(*set.begin());
        return x;
    }
    
    void addBack(int num) {
        set.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */