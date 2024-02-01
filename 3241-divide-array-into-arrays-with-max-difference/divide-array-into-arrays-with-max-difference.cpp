class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int i;

        vector<vector<int>>ans;
        for(i=2;i<a.size();i+=3){
            if(a[i]-a[i-2]>k ) return {};
        }

        int y=0;

        for(i=0;i<a.size();i+=3){
            ans.push_back({});
            ans[y].push_back(a[i]);
            ans[y].push_back(a[i+1]);
            ans[y++].push_back(a[i+2]);
        }

        return ans;
    }
};