class Solution {
public:

// map<vector<long long>,double>tbl;
vector<vector<vector<double>>>tbl;

    double f(int i, int j, int n, int k){
        if(i<0 or i>=n or j<0 or j>=n) return 0;
        if(k==0) return 1;

        double ans=0;

        if(tbl[i][j][k]!=-1) return tbl[i][j][k];

        int dx[8] = {1,1,-1,-1,2,2,-2,-2};
        int dy[8] = {2,-2,2,-2,1,-1,1,-1};

        for(int x=0;x<8;x++){
            ans=ans + (f(i+dx[x],j+dy[x],n,k-1))/8;
        }

        return tbl[i][j][k] = ans;
    }


    double knightProbability(int n, int k, int i, int j) {
        // double x = (f(i,j,n,k))/1.0;
        // cout<<x;
        tbl.resize(n+1,vector<vector<double>>(n+1,vector<double>(k+1,-1)));
        return (f(i,j,n,k));
        
    }
};