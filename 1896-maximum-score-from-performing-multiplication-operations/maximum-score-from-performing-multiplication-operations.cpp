class Solution {
public:

vector<vector<int>>tbl;
// map<vector<int>,int>tbl;

    int f(int i,int j,vector<int>& a, vector<int>& b){ //a - multiplier , b-nums
        if(i==a.size())
        return 0;

        int n=b.size();

        int k = n - i+j-1;

        if(tbl[i][j]==-1){
        int l = a[i]*b[j]+f(i+1,j+1,a,b);
        int r = a[i]*b[k]+f(i+1,j,a,b);

        tbl[i][j] = max(l,r);
        }

        return tbl[i][j];
    }

    int maximumScore(vector<int>& a, vector<int>& b) {
        tbl.resize(b.size(),vector<int>(b.size()+1,-1));
        return f(0,0,b,a);
    }
};