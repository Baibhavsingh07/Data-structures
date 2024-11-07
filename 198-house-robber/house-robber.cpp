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
        ans.resize(a.size()+2, -1);
        ans[a.size()+1]=0;
        ans[a.size()]=0;
        for(int i=a.size()-1;i>=0;i--){
            if(ans[i+1] > ans[i+2] + a[i]) {
                ans[i]=ans[i+1];
            } else {
                ans[i] = ans[i+2]+a[i];
            }
        }

        return ans[0];
    }
};