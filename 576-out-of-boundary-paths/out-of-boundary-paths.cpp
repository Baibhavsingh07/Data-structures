class Solution {
public:

map<vector<int>,int>tbl;

    int findPaths(int m, int n, int maxMove, int i, int j) {
        if(i==m or j==n or i==-1 or j==-1)return 1;
        if(maxMove==0)return 0;

        if(tbl.find({i,j,maxMove})!=tbl.end()) return tbl[{i,j,maxMove}];

        int l = (findPaths(m,n,maxMove-1,i-1,j))%1000000007;
         l = (l + (findPaths(m,n,maxMove-1,i,j-1))%1000000007)%1000000007;
         l = (l + (findPaths(m,n,maxMove-1,i+1,j))%1000000007)%1000000007;
         l =( l + (findPaths(m,n,maxMove-1,i,j+1))%1000000007)%1000000007;

         return tbl[{i,j,maxMove}] = l;

    }
};