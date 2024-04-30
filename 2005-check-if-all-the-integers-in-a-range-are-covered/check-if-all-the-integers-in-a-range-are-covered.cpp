class Solution {
public:
    bool isCovered(vector<vector<int>>& a, int l, int r) {
        int i,j,c=0,s=0;

        for(i=l;i<=r;i++){
            c=0;
            for(auto x:a){
                if(i>=x[0] and i<=x[1]){c=1;break;}
            }

            if(c==0) return 0;
        }

        return 1;
    }
};