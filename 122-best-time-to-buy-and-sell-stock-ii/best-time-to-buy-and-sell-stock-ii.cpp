class Solution {
public:

vector<vector<int>>tbl;

    int f(int i,vector<int>&a,int bs){
        if(i==a.size()) return 0;

        if(tbl[i][bs]!=INT_MIN) return tbl[i][bs];

        int l=0,r=0;
        l = f(i+1,a,bs);

        if(bs==0) r = -a[i] + f(i+1,a,1);
        else r = a[i]+f(i+1,a,0);

        return tbl[i][bs] = max(l,r);
    }

    int maxProfit(vector<int>& a) {
        tbl.resize(a.size()+1,vector<int>(2,0));

        int i,j,c=0,s=0;

        for(i=a.size()-1;i>=0;i--){
            for(int bs=0;bs<2;bs++){
                int l=0,r=0;
                l = tbl[i+1][bs];

                if(bs==0) r = -a[i] + tbl[i+1][1];
                else r = a[i]+tbl[i+1][0];

                 tbl[i][bs] = max(l,r);
            }
        }

        return tbl[0][0];
    }
};