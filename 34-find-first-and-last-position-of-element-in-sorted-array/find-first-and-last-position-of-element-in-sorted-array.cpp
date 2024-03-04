class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target) {
        vector<int>ans(2,-1);
        int l=0,h=a.size()-1;

        while(l<=h){
            int m = l + (h-l)/2;

            if(a[m]>=target){
                if(a[m]==target)
                ans[0]=m;

                h=m-1;
            }else{
                l=m+1;
            }
        }

        l=0,h=a.size()-1;
        while(l<=h){
            int m = l + (h-l)/2;

            if(a[m]<=target){
                if(a[m]==target)
                ans[1]=m;
                l=m+1;

                
            }else{
                h=m-1;
            }
        }

        return ans;
    }
};