class Solution {
public:

    int f(int i,vector<int>&a,int &k,vector<int>&tbl){
        if(i==a.size()){
           return 0;
        }

        int currmax=0;
        int c=0;
       
        if(tbl[i]==-1){
        for(int j=0;j+i<a.size() and j<k;j++){
            currmax=max(currmax,a[j+i]);
            int x =currmax*(j+1) + f(j+i+1,a,k,tbl);
            c=max(c,x);
            
        }
        tbl[i] =  c;

        }
        return tbl[i];
    }


    int maxSumAfterPartitioning(vector<int>& a, int k) {
        long long i=0,j,c=0,s=0;
        int ans=0;

        vector<int>tbl(a.size()+1,-1);

        return f(0,a,k,tbl);
        return ans;
        
    }
};