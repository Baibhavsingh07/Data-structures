class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        vector<int>ans;
        unordered_map<int,int>map;

        for(auto x:a) map[x]++;
        
        for(auto x:map) if(x.second>1) ans.push_back(x.first);

        return ans;
        
             }
};