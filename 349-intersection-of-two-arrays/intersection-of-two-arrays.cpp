class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        unordered_set<int>set2(a.begin(),a.end());

        vector<int>ans;
        for(auto x:b){
            if(set2.find(x)!=set2.end()){
                ans.push_back(x);
                set2.erase(x);
            }
        }

        return ans;



    }
};