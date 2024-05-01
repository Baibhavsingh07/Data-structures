class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int t) {
        for(auto x:a) for(auto y:x) if(y==t) return 1;

        return 0;
    }
};