class Solution {
public:

int mod = 1000000007;

// map<vector<int>,int>tbl;
vector<vector<int>>tbl;

    int f(int i,int n,int k,int t){
        if(i==n and t==0) return 1;
        if(i==n or t<0 ) return 0;

       int ans=0;

        if(tbl[i][t]==-1){
        for(int j=1;j<=k;j++){
            ans=(ans + (f(i+1,n,k,t-j)%mod))%mod;
        }

        tbl[i][t] =  (ans)%mod;
        }

        return (tbl[i][t])%mod;

    }

    int numRollsToTarget(int n, int k, int t) {
        tbl.resize(n+1,vector<int>(t+1,-1));
        return f(0,n,k,t);
    }
};