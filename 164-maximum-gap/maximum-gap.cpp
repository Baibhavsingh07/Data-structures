class Solution {
public:
    int maximumGap(vector<int>& a) {
        sort(a.begin(),a.end());

        int i,j,c=0;

        for(i=1;i<a.size();i++){
            if(a[i]-a[i-1]>c) c=a[i]-a[i-1];
        }

        return c;

    }
};