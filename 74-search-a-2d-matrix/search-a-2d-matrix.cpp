class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int t) {
        int i,j,c=0,s=0;

        i=0;
        while( i<a.size() and  a[i][a[0].size()-1]<t)i++;

        if(i==a.size()) return 0;

        int l=0,h=a[0].size();

        while(l<=h){
            int m = l +(h-l)/2;
            if(a[i][m]==t) return 1;
            else if(a[i][m]>t) h=m-1;
            else l=m+1;
        }

        return 0;
    }
};