class Solution {
public:

// map<vector<int>,int>tbl;
vector<vector<vector<int>>>tbl;

    int f(int i,vector<int>&a,int prev,int sign){
        if(i==a.size()) return 0;

        if(tbl[i][prev+1][sign+1]!=-1) return tbl[i][prev+1][sign+1];

        int l = f(i+1,a,prev,sign);
        int r=0;

        if(prev==-1  )
        r = 1+f(i+1,a,i,-1);
        else if(sign==-1 or (sign==1 and a[i]-a[prev]<0) or (sign==0 and a[i]-a[prev]>0)){
            int x = a[i]-a[prev];
            if(x!=0)
            r = 1+f(i+1,a,i,x>0?1:0);

        }

        return tbl[i][prev+1][sign+1] = max(l,r);
    }

    int wiggleMaxLength(vector<int>& a) {
        tbl.resize(a.size()+1,vector<vector<int>>(a.size()+2,vector<int>(3,-1)));
        return f(0,a,-1,-1);
    }
};