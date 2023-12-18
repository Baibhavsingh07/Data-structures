class Solution {
public:
    int maxProductDifference(vector<int>& a) {
        int i,j,k,c=0,s=0;
        int m1=0,m2=0;
        int l1=INT_MAX;
        int l2=INT_MAX;

        for(i=0;i<a.size();i++){
            if(a[i]>m1){
                m2=m1;
                m1=a[i];
            }
            else if(a[i]>m2){
                m2=a[i];
            }
            if(a[i]<l1){
                l2=l1;
                l1=a[i];
            }
            else if(a[i]<l2){
                l2=a[i];
            }
        }

        return m1*m2-l1*l2;
        
    }
};