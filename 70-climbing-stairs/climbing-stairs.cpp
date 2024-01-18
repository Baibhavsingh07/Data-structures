class Solution {
public:

    int f(int n,unordered_map<int,int>&tbl){
        if(n==0)
        return 1;
        if(n==1)
        return 1;
        if(tbl.find(n)==tbl.end()){
            int l = f(n-1,tbl);
            int r = f(n-2,tbl);
            tbl[n]=l+r;
        }
        return tbl[n];
    }

    int climbStairs(int n) {
        unordered_map<int,int>tbl;
        return f(n,tbl);
    }
};