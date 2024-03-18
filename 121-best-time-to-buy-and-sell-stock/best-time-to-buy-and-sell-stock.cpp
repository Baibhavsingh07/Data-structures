class Solution {
public:
    int maxProfit(vector<int>& a) {
        vector<int>v1(a.size()),v2(a.size());

        int i,m=0;
        int mi =INT_MAX,ma=INT_MIN;
        for(i=0;i<a.size();i++){
            v1[i] = min(a[i],mi);
            mi=min(mi,a[i]);
        }

        for(i=a.size()-1;i>=0;i--){
            v2[i] = max(a[i],ma);
            ma=max(ma,a[i]);
        }

        for(i=0;i<a.size();i++){
            m = max(m,v2[i]-v1[i]);
        }

        return m;
    }
};