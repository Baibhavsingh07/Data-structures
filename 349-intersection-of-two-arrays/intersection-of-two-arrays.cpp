class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        unordered_set<int>set1(a.begin(),a.end());
        unordered_set<int>set2(b.begin(),b.end());

        vector<int>ans;
        for(auto x:set1){
            if(set2.find(x)!=set2.end()){
                ans.push_back(x);
            }
        }

        return ans;



    }
};