class Solution {
public:

map<int,vector<vector<int>>>tbl;

    vector<vector<int>> f(int i,vector<vector<int>>&a,int n){
        if(i==n) return {{n}};

        vector<vector<int>> ans;

        if(tbl.find(i)!=tbl.end()) return tbl[i];

        for(auto x:a[i]){
            auto l = f(x,a,n);
            for(auto v:l) ans.push_back(v);
        }

        for(int x=0;x<ans.size();x++){
            ans[x].insert(ans[x].begin(),i);
        }

        return tbl[i] = ans;

    }


    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        return f(0,graph,graph.size()-1);
    }
};