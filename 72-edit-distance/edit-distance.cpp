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
        tbl.resize(a.size()+1,vector<int>(b.size()+1,0));

        for(int i=0;i<=a.size();i++)
        tbl[i][0] = i;
        for(int j=0;j<=b.size();j++)
        tbl[0][j] = j;

        for(int i=1;i<=a.size();i++){
            for(int j=1;j<=b.size();j++){
                int match=INT_MAX-1,replace=INT_MAX-1,del = INT_MAX-1,insert = INT_MAX-1;
                if(a[i-1]==b[j-1]){
                    match = tbl[i-1][j-1];
                }
                    replace = 1+tbl[i-1][j-1];
                    del = 1+tbl[i-1][j];
                    insert = 1+ tbl[i][j-1];
                
                
                tbl[i][j] = min(insert,min(replace,min(match,del)));

            }
        }

        // for(auto x:tbl){
        // for(auto y:x)
        // cout<<y<<" ";

        // cout<<endl;
        // }

        
        return tbl[a.size()][b.size()];

    }
};