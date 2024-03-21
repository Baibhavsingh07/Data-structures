class Solution {
public:
    int minSubArrayLen(int t, vector<int>& a) {
        int i,j,c=0,s=0;

        i=0,j=0;

        int ans=INT_MAX;

        while(j<a.size()){

            while( j<a.size() and c < t) c+=a[j++];
            // if(j<a.size())
            // ans=min(ans,j-i+1);

            while( i<=j and  c>=t){
                c=c - a[i++];
                ans=min(ans,j-i+1);

            }

        }

        return ans==INT_MAX?0:ans;
    }
};