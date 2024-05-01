class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int t) {
        int i,j,c=0,s=0;

        for(i=0;i<a.size();i++){
            int l=0,h=a[0].size()-1;

            while(l<=h){
                int m = l + (h-l)/2;

                if(a[i][m]==t) return 1;
                else if(a[i][m]>t) h=m-1;
                else l=m+1;
            }
        }

        return 0;
    }
};