class Solution {
public:

// map<vector<int>,int>tbl;
vector<vector<vector<int>>>tbl;

    int f(int i,int j,vector<int>& a, vector<int>& b ,int c){
        if((i==a.size() or j==b.size()) and c==1 )return 0;
        if((i==a.size() or j==b.size()) and c==0 )return INT_MIN;

        if(tbl[i][j][c]!=INT_MIN) return tbl[i][j][c];

        int l = max(f(i+1,j,a,b,c),f(i,j+1,a,b,c));
        int r = INT_MIN;

        if((a[i]>=0 and b[j]>=0 and c==1) or (a[i]<0 and b[j]<0 and c==1) or c==0 )
        r= a[i]*b[j] + f(i+1,j+1,a,b,1);

        return tbl[i][j][c] = max(l,r);
    }

    int maxDotProduct(vector<int>& a, vector<int>& b) {
        tbl.resize(a.size()+1,vector<vector<int>>(b.size()+1,vector<int>(2,INT_MIN)));
        return f(0,0,a,b,0);
    }
};