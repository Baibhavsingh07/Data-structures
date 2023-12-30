class Solution {
public:
    bool makeEqual(vector<string>& a) {
        vector<int>map(27);
        for(auto x:a)
        for(auto y:x)
        map[y-'a']++;

        int n=a.size();

        for(auto x:map)
        if(x%n!=0) return 0;

        return 1;
        
    }
};