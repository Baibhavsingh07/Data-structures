class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        vector<int>ans(2);
        int i,j,c=0,s=0;

        for(i=0;i<a.size();i++){
            for(j=i+1;j<a.size();j++){
                if(a[i]+a[j] == t) {
                    ans[0]=i;
                    ans[1]=j;
                    return ans;
                }
            }
        }

        return {-1,-1};
    }
};