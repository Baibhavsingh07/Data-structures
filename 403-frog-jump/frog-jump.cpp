class Solution {
public:

map<vector<int>,int>tbl;

    int f(int i,vector<int>&a,int k){
        if(i==a.size()-1) return 1;
        if(i>a.size()-1) return 0;

        int l=0,r=0,m=0;

        if(tbl.find({i,k})!=tbl.end()) return tbl[{i,k}];
        
        for(int j=i+1;j<a.size();j++){
            if(a[j]-a[i]==k-1 or a[j]-a[i]==k or a[j]-a[i]==k+1  )
            l= l or f(j,a,a[j]-a[i]);
            // else break;
        }

        return tbl[{i,k}] = l;

    }

    bool canCross(vector<int>& a) {
        int i,j,c=0;

        if(a[1]!=1) return 0;

        return f(1,a,1);
    }
};