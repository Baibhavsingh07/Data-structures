class Solution {
public:

int mod = 1000000007;

map<vector<int>,int>tbl;

    int f(int i,int n,int k,int t){
        if(i==n and t==0) return 1;
        if(i==n ) return 0;

        int ans=0;

        if(tbl.find({i,t})==tbl.end()){
        for(int j=1;j<=k;j++){
            ans=(ans + (f(i+1,n,k,t-j)%mod))%mod;
        }

        tbl[{i,t}] =  ans;
        }

        return tbl[{i,t}];

    }

    int numRollsToTarget(int n, int k, int t) {
        return f(0,n,k,t);
    }
};