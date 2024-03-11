class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        vector<int>ans(a.begin(),a.end());

        long long s1 = 1,s2=1,c=0;

        for(auto x:a) s1*=x;
        for(auto x:a) if(x!=0) s2*=x;
                        else c++;

        for(int i=0;i<a.size();i++){
            if(a[i]==0 and c==1){
                ans[i]=s2;
            }else if(a[i]==0 and c>1){
                ans[i]=0;
            }else{
                ans[i]=s1/a[i];
            }
        }
        return ans;

    }
};