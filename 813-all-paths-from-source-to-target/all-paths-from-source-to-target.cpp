class Solution {
public:

vector<vector<int>>ans;

    void f(int i,vector<int>&curr,vector<vector<int>>&a){
        if(i==a.size()-1) {
            ans.push_back(curr);
            return;
        }

        for(auto x:a[i]){
            curr.push_back(x);
            f(x,curr,a);
            curr.pop_back();
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& a) {
        vector<int>curr;

        f(0,curr,a);

        for(auto &x:ans) x.insert(x.begin(),0);

        return ans;
    }
};