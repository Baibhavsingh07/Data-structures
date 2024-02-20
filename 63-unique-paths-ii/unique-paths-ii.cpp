class Solution {
public:

    map<vector<int>,int>tbl;

    int f(int i,int j,vector<vector<int>>&a,int m,int n){
        if(i==m-1 and j==n-1 ) if(a[i][j]==0) return 1;
                                else return 0;

        if(tbl.find({i,j})!=tbl.end()) return tbl[{i,j}];

        int l=0,r=0;
        if(i+1<m and a[i+1][j]==0) l = f(i+1,j,a,m,n);
        if(j+1<n and a[i][j+1]==0) r = f(i,j+1,a,m,n);

        return tbl[{i,j}] = l+r;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& a) {
        if(a[0][0]==1) return 0;
        return f(0,0,a,a.size(),a[0].size());
    }
};