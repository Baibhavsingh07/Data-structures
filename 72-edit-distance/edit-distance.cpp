class Solution {
public:

    // map<pair<int,int>,int>tbl;
    vector<vector<int>>tbl;

    int f(int i,int j,string &a,string& b){
        if(j==b.size())
        if(i==a.size())
        return 0;
        else
        return a.size()-i;

        if(i==a.size())
        return b.size()-j;

        if(tbl[i][j]==-1){

        int l=INT_MAX,r=INT_MAX,p=INT_MAX;
        
        if(a[i]!=b[j]){
            l=1 + f(i+1,j,a,b) == INT_MAX ? INT_MAX-1:1 + f(i+1,j,a,b);
            r = 1+ f(i+1,j+1,a,b);
            p= 1+ f(i,j+1,a,b);
        } else{
            l=f(i+1,j+1,a,b);

        }
        tbl[i][j] = min(p,min(l,r));
        }

        // if(l==r and r==p and p==INT_MAX)
        // return INT_MAX;

        return tbl[i][j];

    }

    int minDistance(string a, string b) {
        tbl.resize(a.size()+1,vector<int>(b.size()+1,-1));
        return f(0,0,a,b);
    }
};