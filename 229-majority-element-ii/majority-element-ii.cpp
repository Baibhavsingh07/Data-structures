class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        unordered_map<int,int>m;
        vector<int>ans;
        int k = a.size()/3;

        for(auto x:a)m[x]++;

        for(auto x:m)if(x.second>k) ans.push_back(x.first);

        return ans;

    }
};