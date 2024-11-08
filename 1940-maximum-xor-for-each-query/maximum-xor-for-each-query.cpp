class Solution {
public:
    vector<int> getMaximumXor(vector<int>& a, int mb) {
        int i,j,c=0,s=0;
        vector<int>ans;

        for(i=1;i<a.size();i++){
            a[i]=a[i]^a[i-1];
        }

        for(auto x:a){
            int xx=0;
            int ta=0;
            int n=x;

            int m=mb;
            vector<int>v;
            while(n){
                int r=n%2;
                v.push_back(r);
                n/=2;
            }

            for(i=0;i<mb;i++){
                if(i>=v.size()) ta+=pow(2,i);
                else {
                    if(v[i]==0) ta+=pow(2,i);
                }
            }
           
            ans.push_back(ta);
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};