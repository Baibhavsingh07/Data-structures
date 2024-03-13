class Solution {
public:


    int f(int i,int j,int n,vector<vector<vector<long long>>>&tbl){
        if((i==3 and j==0 ) or  (i==3 and j==2)) return 0;
        if(i<0 or j<0 or i>3 or j>2) return 0;
        if(n==0) return 1;

        int x[8] = {1,1,-1,-1,2,2,-2,-2};
        int y[8] = {2,-2,2,-2,1,-1,1,-1};

        if(tbl[i][j][n]!=-1) return tbl[i][j][n];

        long long ans=0;

        for(int k=0;k<8;k++){
            ans = (ans + (f(i+x[k],j+y[k],n-1,tbl))%1000000007)%1000000007;
        }

        return tbl[i][j][n] = ans;
    }

    int knightDialer(int n) {
        long long ans=0;

        for(int i=0;i<4;i++)
        for(int j=0;j<3;j++){
            if((i==3 and j==0)  or ( i==3 and j==2))
            continue;
            else
            {
                vector<vector<vector<long long>>>tbl(5,vector<vector<long long>>(4,vector<long long>(n+1,-1)));
                long long aa = f(i,j,n-1,tbl);
                ans= (ans + (aa)%1000000007)%1000000007;
            }
        }


        return ans;
    }
};