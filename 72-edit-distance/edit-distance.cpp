class Solution {
public:

    // map<pair<int,int>,int>tbl;
    vector<vector<int>>tbl;

    int f(int n,int m,string &a,string& b){
        if(n==0) return m;
        if(m==0) return n;

        int match=INT_MAX-1,replace=INT_MAX-1,del = INT_MAX-1,insert = INT_MAX-1;

        if(tbl[n][m]!=-1) return tbl[n][m];

        if(a[n-1]==b[m-1]){
            match = f(n-1,m-1,a,b);
        }else{

        replace = 1+f(n-1,m-1,a,b);
        del = 1+f(n-1,m,a,b);
        insert = 1+ f(n,m-1,a,b);
        }
        

        return tbl[n][m] = min(insert,min(replace,min(match,del)));

    }

    int minDistance(string a, string b) {
        tbl.resize(a.size()+1,vector<int>(b.size()+1,-1));
        return f(a.size(),b.size(),a,b);
    }
};