class Solution {
public:
    bool makeEqual(vector<string>& a) {
        unordered_map<char,int>map;
        for(auto x:a)
        for(auto y:x)
        map[y]++;

        int n=a.size();

        for(auto x:map)
        if(x.second%n!=0) return 0;

        return 1;
        
    }
};