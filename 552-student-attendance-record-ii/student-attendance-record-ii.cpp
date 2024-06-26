class Solution {
public:

    int tbl[100001][4][3];

    int f(int i,int n,int lc,int ac){
        if(i==n) return 1;

        long long r=0,m=0;

        if(tbl[i][lc][ac]!=-1) return tbl[i][lc][ac];

        auto l = f(i+1,n,0,ac)%1000000007;
        if(lc<2)
         r = f(i+1,n,lc+1,ac)%1000000007;

        if(ac>0)
         m = f(i+1,n,0,ac-1)%1000000007;

        return tbl[i][lc][ac]= (l+r+m)%1000000007;

    }

    int checkRecord(int n) {
        for(int i=0;i<100001;i++) for(int j=0;j<4;j++) for(int k=0;k<3;k++) tbl[i][j][k]=-1;
        return f(0,n,0,1);
    }
};