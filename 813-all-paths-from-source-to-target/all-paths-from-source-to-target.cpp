class Solution {
public:

    vector<vector<int>> f(int i,vector<vector<int>>&a,int n){
        if(i==n) return {{n}};

        vector<vector<int>> ans;

        for(auto x:a[i]){
            auto l = f(x,a,n);
            for(auto v:l) ans.push_back(v);
        }

        for(int x=0;x<ans.size();x++){
            ans[x].insert(ans[x].begin(),i);
        }

        return ans;

    }


    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        return f(0,graph,graph.size()-1);
    }
};