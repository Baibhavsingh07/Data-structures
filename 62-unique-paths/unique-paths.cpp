class Solution {
public:

map<vector<int>,int>tbl;

    int f(int i,int j,int m,int n){
        if(i==m-1 and j==n-1) return 1;

        if(tbl.find({i,j})!=tbl.end()) return tbl[{i,j}];

        int l=0,r=0;
        if(i+1<m) l = f(i+1,j,m,n);
        if(j+1<n) r = f(i,j+1,m,n);

        return tbl[{i,j}] = l+r;
    }

    int uniquePaths(int m, int n) {
        return f(0,0,m,n);
    }
};