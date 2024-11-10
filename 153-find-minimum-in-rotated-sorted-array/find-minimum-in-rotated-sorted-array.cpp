class Solution {
public:
    int findMin(vector<int>& a) {
        int i,j,c=0,s=INT_MAX;

        int l=0,r=a.size()-1;

        if(a.size()==1) return a[0];

        while(l<=r){
            int m=l+(r-l)/2;

            if(s>a[m]) s=a[m];
            if(a[m]>=a[l]){
                s=min(s,a[l]);
                l=m+1;
            } else {
                r=m-1;
            }
        }
        return s;
    }
};