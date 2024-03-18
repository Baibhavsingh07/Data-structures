class Solution {
public:



    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans(n,vector<int>(1,1));
        int i,j,k,c=0;

        for(i=1;i<n;i++){
            
            for(j=1;j<ans[i-1].size();j++){
                ans[i].push_back(ans[i-1][j]+ans[i-1][j-1]);
            }

            ans[i].push_back(1);
        }

        return ans;

    }
};