class Solution {
public:
    bool search(vector<int>& a, int target) {
        int l=0,h=a.size()-1;

        while(l<=h){
            int m = l+(h-l)/2;

            if(a[m]==target) return 1;
            if(a[l]==a[m]){ l++; continue;}
            else if(a[m]==a[h]) {h--; continue;}
            if(a[m]>a[l]){
                if(a[l]<=target and target<=a[m]) h=m-1;
                else l=m+1;
            }else{
                if(a[m]<=target and target<=a[h]) l=m+1;
                else h=m-1;
            }
        }
            return 0;
    }
};