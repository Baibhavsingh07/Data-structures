class Solution {
public:
    vector<int> getMaximumXor(vector<int>& a, int mb) {
        int i,j,c=0,s=0;
        vector<int>ans;

        for(i=1;i<a.size();i++){
            a[i]=a[i]^a[i-1];
        }

        int m=pow(2,mb)-1;
        for(auto x:a){
            
            ans.push_back(x ^ m);
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};