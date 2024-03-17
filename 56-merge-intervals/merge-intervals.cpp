class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        vector<vector<int>>ans;

        sort(a.begin(),a.end());

        for(int i=0;i<a.size();i++){
            int st = a[i][0];
            int end = a[i][1];

            int j=i+1;
            for(j=i+1;j<a.size();j++){
                if(end>=a[j][0]){
                    end = max(end,a[j][1]);
                }else break;
            }

            i=j;
            i--;

            ans.push_back({st,end});
        }

        return ans;
    }
};