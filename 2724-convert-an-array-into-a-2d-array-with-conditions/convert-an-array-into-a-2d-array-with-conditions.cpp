class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& a) {
        vector<vector<int>>ans;
        int i,j,k,c=0,s=0;

        unordered_map<int,int>map;
        for(auto x:a)
        map[x]++;

        for(auto x:map){
            int v = x.second;
            for(i=0;i<v;i++){
                if(i>=ans.size()) ans.push_back({});
                ans[i].push_back(x.first);
            }
        }

        return ans;
    }
};