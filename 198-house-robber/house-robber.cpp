class Solution {
public:

   
//my solution

    int rob(vector<int>& a) {
        int m=INT_MIN;
        int c=0,s=0,i=0;
        int n=a.size();

        vector<int>tbl(n+2,0);

        // t[i]=max(i>0?t[i-1]:0,(i>1?t[i-2]:0 ) +  a[i]);



        for(i=n-1;i>=0;i--){
            tbl[i] =max(tbl[i+1],a[i]+tbl[i+2]) ;
            
            

           

        }
        return tbl[0];
        
        
    }
};