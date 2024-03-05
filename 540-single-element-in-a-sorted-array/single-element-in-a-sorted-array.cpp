class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        //[1,1,2,2,3,3,4,4,8]
        int l=1,h=a.size()-2;

        if(a.size()==1) return a[0];

        if(a[0]!=a[1]) return a[0];
        if(a[a.size()-1]!=a[a.size()-2]) return a[a.size()-1];

        while(l<=h){
            int m=l+(h-l)/2;

            if(a[m]!=a[m+1] and a[m]!=a[m-1]) return a[m];

            if(a[m]==a[m-1]){
                if(m%2==0) h=m-1;
                else l=m+1;
            }else{
                if(m%2==0) l=m+1;
                else h=m-1;
            }
        }

        return -1;
    }
};