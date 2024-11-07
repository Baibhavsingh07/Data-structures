class Solution {
public:

    vector<vector<int>>map;
    int f(int i,vector<int>&a, int bos) {
        if(i==a.size()) return 0;

        if(map[i][bos]!=INT_MIN) return map[i][bos];

        int l = f(i+1,a,bos);
        int r=0,k=0;

        if(bos == 0) {
            r = -a[i]+f(i+1,a,1);
        }
        if(bos==1){
            k=a[i];
        }
        return  map[i][bos] = max(l,max(r,k));
    }

    int maxProfit(vector<int>& a) {
        int i,j,c=0,s=0;
        map.resize(a.size()+1, vector<int>(2,INT_MIN));
        return f(0,a,0);
    }
};