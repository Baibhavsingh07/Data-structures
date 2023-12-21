class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& a) {
        vector<int>v;
        int i,j,k,c=0;

        for(auto x:a){
            v.push_back(x[0]);
        }

        sort(v.begin(),v.end());

        for(i=1;i<v.size();i++){
            c=max(c,v[i]-v[i-1]);
        }

        return c;
        
    }
};