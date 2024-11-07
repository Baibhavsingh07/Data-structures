class Solution {
public:

    vector<int>ans;

    int f(int i,vector<int>& a){
        if(i>=a.size()) return 0;

        if(ans[i]!=-1) return ans[i];

        int l = f(i+1,a);
        int r=0;
            r = a[i]+f(i+2,a);

        return ans[i] = max(l,r);
    }

    int rob(vector<int>& a) {
        ans.resize(a.size()+1, -1);
        return f(0,a);
    }
};