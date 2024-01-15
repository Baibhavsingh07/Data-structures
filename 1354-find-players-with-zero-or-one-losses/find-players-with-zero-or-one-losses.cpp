class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& a) {
         vector<vector<int>>ans;

         unordered_set<int>set;
         for(auto x:a) {
             set.insert(x[0]);
             set.insert(x[1]);
         }

        map<int,int>map;
         for(auto x:set){
             map[x]=2;
         }

         for(auto x:a){
             map[x[1]]--;
         }

         ans.push_back({});
         ans.push_back({});

         for(auto x:map){
             if(x.second==2) ans[0].push_back(x.first);
             if(x.second==1) ans[1].push_back(x.first);
         }

        return ans;


    }
};