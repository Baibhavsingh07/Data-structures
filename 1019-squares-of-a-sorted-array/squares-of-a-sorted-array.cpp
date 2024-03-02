class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        
        int i=0,j,k,c=0,l,h,m;
        int n=a.size();
        vector<int> v(n);
        

        j=n-1;

        while(i<=j)
        {
            if(a[i]<0)
            a[i]*=(-1);
            if(a[j]<0)
            a[j]*=(-1);

            if(a[i]<a[j])
            {
                v[c++]=a[j]*a[j];
                j--;
            }
            else
            {
                v[c++]=a[i]*a[i];
                i++;
            }
        }
        c=0;
        for(i=n-1;i>=0;i--)
        a[c++]=v[i];
        return a;
    }
};