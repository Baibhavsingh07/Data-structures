class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n=a.size(),i,j,c=0;
        vector<int>ans(n);

        vector<int>p(n);
        vector<int>s(n);
        p[0]=a[0];
        s[n-1]=a[n-1];
        for(i=1;i<n;i++) p[i]=p[i-1]*a[i];
        for(i=n-2;i>=0;i--) s[i]=s[i+1]*a[i];

        p.insert(p.begin(),1);
        s.push_back(1);

        for(i=0;i<n;i++) ans[i]=p[i]*s[i+1];
        return ans;
    }
};