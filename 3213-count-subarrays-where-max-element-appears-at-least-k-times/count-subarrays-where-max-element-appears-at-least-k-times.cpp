class Solution {
public:
    long long countSubarrays(vector<int>& a, int k) {
        long long l=0,r=0,i,j,c=0,s=0,ans=0;

        int m = *max_element(a.begin(),a.end());
        int mxe=0;

        while(r<a.size()){
            if(mxe < k) {
                if(a[r]==m) mxe++;
            }
            while( mxe>=k){
                ans=ans+a.size()-r;

                if(a[l]==m) mxe--;
                l++;
            }
            r++;
        }

        return ans;

    }
};