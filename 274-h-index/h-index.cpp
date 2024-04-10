class Solution {
public:
    int hIndex(vector<int>& a) {
        int i,j,c=0,s=0,ans=0;

        sort(a.begin(),a.end());

        for(i=a.size()-1;i>=0;i--){
            if(a[i]>=a.size()-i) ans=max(ans,(int)(a.size()-i));
            else break;
        }

        return ans;

    }
};