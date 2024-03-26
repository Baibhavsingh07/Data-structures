class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        unordered_map<int,int>b;

        for(auto x:a) b[x]++;
        int i=1;
        for( i=1;i<=a.size();i++) if(b.find(i)==b.end()) return i;

        return i;
    }
};