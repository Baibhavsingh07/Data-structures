class Solution {
public:

    void f(int n,unordered_map<int,int>&map,vector<int>&curr,vector<vector<int>>&ans){
        if(curr.size()==n){
            ans.push_back(curr);
            return;
        }
        for(auto x:map){
            if(x.second>0){
                curr.push_back(x.first);
                map[x.first]--;
                f(n,map,curr,ans);
                curr.pop_back();
                map[x.first]++;
            }
        }
    }


    vector<vector<int>> permuteUnique(vector<int>& a) {
        vector<int>curr;
        vector<vector<int>>ans;
        unordered_map<int,int>map;

        for(auto x:a)map[x]++;

        f(a.size(),map,curr,ans);
        return ans;
    }
};