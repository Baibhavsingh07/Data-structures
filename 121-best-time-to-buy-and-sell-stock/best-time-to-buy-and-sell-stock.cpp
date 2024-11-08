class Solution {
public:
    int maxProfit(vector<int>& a) {
        int i,j,c=0,s=0;
        vector<int>t1(a.size()),t2(a.size());
        t1[0]=a[0];
        t2[a.size()-1]=a[a.size()-1];
        for(i=1;i<a.size();i++){
            t1[i]=min(t1[i-1],a[i]);
        }


        for(i=0;i<a.size();i++){
            c=max(c,a[i]-t1[i]);
        }
        return c;
    }
};