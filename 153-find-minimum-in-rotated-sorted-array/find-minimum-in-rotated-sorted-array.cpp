class Solution {
public:
    int findMin(vector<int>& a) {
        int l=0,h=a.size()-1,ans=INT_MAX,mi=-1;

        while(l<=h){
            int m = l+(h-l)/2;

            if(a[m]<ans){
                mi=m;ans=a[m];
            }
            if(a[l]<=a[m]){
                if(ans>a[l])
                ans=a[l];
                mi=l;
                l=m+1;
            }else{
                
                h=m-1;
            }
        }

        return ans;
    }
};