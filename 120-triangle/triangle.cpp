class Solution {
public:

    vector<vector<int>>tbl;

    int f(int i,int j,vector<vector<int>>& a,int n){
        if(i==n) return 0;

        if(tbl[i][j]!=INT_MAX) return tbl[i][j];

        auto l = a[i][j] +f(i+1,j,a,n);
        auto r = a[i][j]+ f(i+1,j+1,a,n);

        return tbl[i][j]= min(l,r);
    }

    int minimumTotal(vector<vector<int>>& a) {
        tbl.resize(a.size(),vector<int>(a.size(),INT_MAX));
        return f(0,0,a,a.size());
    }
};