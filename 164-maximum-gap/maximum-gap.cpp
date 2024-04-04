class Solution {
public:
    int maximumGap(vector<int>& a) {
        int i,j;
        int c=0,n=a.size();

        if(n==1) return 0;
        if(n==2) return abs(a[0]-a[1]);

        int ma=*max_element(a.begin(),a.end());
        int mi=*min_element(a.begin(),a.end());

        int gap = (int)ceil((ma-mi+0.0)/(n-1));
        if(ma==mi) gap=1;

        vector<int>mib(n-1,INT_MAX);  // min bucket
        vector<int>mab(n-1,INT_MIN);  //max_bucket

        for(i=0;i<n;i++){
            if(a[i]==mi or a[i]==ma) continue;

            int buck_no = (a[i]-mi)/gap;
            mib[buck_no] = min(mib[buck_no],a[i]);
            mab[buck_no] = max(mab[buck_no],a[i]);
        }


        int ans=0;
        int prev=mi;
        for(i=0;i<mib.size();i++){
            if(mib[i]!=INT_MAX ){   //if bucket is not empty
               ans=max(ans,mib[i]-prev);  
                prev=mab[i];
            }
                
            
        }

        return max(ans,ma-prev);

    }
};