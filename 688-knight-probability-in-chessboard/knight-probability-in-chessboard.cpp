class Solution {
public:

map<vector<long long>,double>tbl;

    double f(int i, int j, int n, int k){
        if(i<0 or i>=n or j<0 or j>=n) return 0;
        if(k==0) return 1;

        double ans=0;

        if(tbl.find({i,j,k})!=tbl.end()) return tbl[{i,j,k}];

        int dx[8] = {1,1,-1,-1,2,2,-2,-2};
        int dy[8] = {2,-2,2,-2,1,-1,1,-1};

        for(int x=0;x<8;x++){
            ans=ans + (f(i+dx[x],j+dy[x],n,k-1))/8;
        }

        return tbl[{i,j,k}] = ans;
    }


    double knightProbability(int n, int k, int i, int j) {
        // double x = (f(i,j,n,k))/1.0;
        // cout<<x;
        return (f(i,j,n,k));
        
    }
};