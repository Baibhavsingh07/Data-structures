class Solution {
public:

vector<vector<vector<int>>>tbl;

    int f(int i,vector<string>&a,int m,int n){
        if(i==a.size()) return 0;

        if(tbl[i][m][n]!=-1) return tbl[i][m][n];

        int wo = f(i+1,a,m,n);
        int w = INT_MIN;

        int ones = count(a[i].begin(),a[i].end(),'1');
        int zeroes = a[i].size()-ones;

        if(m>=zeroes and n>=ones)
        w = 1+  f(i+1,a,m-zeroes,n-ones);

        return tbl[i][m][n] =  max(w,wo);

    }

    int findMaxForm(vector<string>& a, int m, int n) {
        tbl.resize(a.size()+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
        return f(0,a,m,n);
        
    }
};