class Solution {
public:
    bool uniqueOccurrences(vector<int>& a) {
        unordered_map<int,int>map;
        unordered_set<int>set;

        for(auto x:a) map[x]++;

        for(auto x:map){
            if(set.find(x.second)!=set.end()) return 0;
            set.insert(x.second);
        }

        return 1;
    }
};