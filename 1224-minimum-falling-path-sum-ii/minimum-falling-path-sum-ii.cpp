class Solution {
public:

vector<vector<int>>tbl;

    int f(int i,int j,vector<vector<int>>&a){
        if(i==a.size()) return 0;

        int ans=INT_MAX;

        if(tbl[i][j+1]!=INT_MAX) return tbl[i][j+1];

        for(int x=0;x<a[0].size();x++){
            if(x==j) continue;

            ans=min(ans , a[i][x] + f(i+1,x,a));
        }

        return tbl[i][j+1] = ans;

    }

    int minFallingPathSum(vector<vector<int>>& a) {
        tbl.resize(a.size(),vector<int>(a.size()+1,INT_MAX));
        return f(0,-1,a);
    }
};