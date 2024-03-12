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
            ans[x].push_back(i);
        }

        return ans;

    }


    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

        auto x = f(0,graph,graph.size()-1);

        for(auto &y:x){
            reverse(y.begin(),y.end());
        }

        return x;
    }
};