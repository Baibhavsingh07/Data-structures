class Solution {
public:
    int findNumberOfLIS(vector<int>& a) {
         int i,j,k,c=0,s=0,ml=1,ans=0;
        int n=a.size();
        int  l[n];
        int b[n];
        for(i=0;i<n;i++)
        {
            l[i]=1;
            b[i]=1;
        }
        
        for(i=1;i<a.size();i++)
        {
            
            for(j=0;j<i;j++)
            {
                if(a[i]>a[j] and l[j]+1>l[i])
                {
                    l[i]=l[j]+1;
                    b[i]=b[j];
                }
                else if(a[i]>a[j] and l[j]+1==l[i])
                {
                    b[i]+=b[j];
                }
            }
            ml=max(ml,l[i]);

        }
        for(i=0;i<n;i++)
        {
            if(l[i]==ml){
            c+=b[i];
            }
        }
        return c;
    }
};