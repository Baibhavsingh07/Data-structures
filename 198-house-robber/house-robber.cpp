class Solution {
public:



    int f(int i,vector<int>&a,unordered_map<int,int>&tbl){
        if(i>=a.size()) return 0;

        if(tbl.find(i)!=tbl.end()) return tbl[i];

        return tbl[i] =  max(f(i+1,a,tbl),a[i]+f(i+2,a,tbl));
    }
 
    int rob(vector<int>& a) { 
        
        unordered_map<int,int>tbl;
        return f(0,a,tbl);
    }
};