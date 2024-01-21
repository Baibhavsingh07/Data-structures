class Solution {
public:



    // int f(int i,vector<int>&a,vector<int>&tbl){
    //     if(i>=a.size()) return 0;

    //     if(tbl[i]!=-1) return tbl[i];

    //     return tbl[i] =  max(f(i+1,a,tbl),a[i]+f(i+2,a,tbl));
    // }
 
    int rob(vector<int>& a) { 
        
        // unordered_map<int,int>tbl;
        vector<int>tbl(a.size()+2,0);

        for(int i=a.size()-1;i>=0;i--){
            tbl[i] = max(tbl[i+1],a[i]+tbl[i+2]);
        }

        return tbl[0];
    }
};