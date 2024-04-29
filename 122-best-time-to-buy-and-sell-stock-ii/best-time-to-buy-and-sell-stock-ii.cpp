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

    int maxProfit(vector<int>& prices) {
        tbl.resize(prices.size(),vector<int>(2,INT_MIN));
        return f(0,prices,0);
    }
};