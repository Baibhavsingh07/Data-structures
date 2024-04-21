class DisjointSet{
    public:
        vector<int>par,rank;

        DisjointSet(int n){
            par.resize(n+1);
            rank.resize(n+1);

            for(int i=0;i<n+1;i++)par[i]=i;
        }

        int findPar(int x){
            if(x==par[x]) return x;

            return par[x]=findPar(par[x]);
        }

        void unionByRank(int u,int v){
            int paru = findPar(u);
            int parv = findPar(v);

            if(rank[paru]>rank[parv]) par[parv]=paru;
            else if(rank[parv]>rank[paru]) par[paru]=parv;
            else{
                par[paru]=parv;
                rank[parv]++;
            }
        }

};


class Solution {
public:
    bool validPath(int n, vector<vector<int>>& e, int s, int d) {
        DisjointSet ds(n);

        for(auto x:e){
            ds.unionByRank(x[0],x[1]);
        }

        return ds.findPar(s)==ds.findPar(d);

    }
};