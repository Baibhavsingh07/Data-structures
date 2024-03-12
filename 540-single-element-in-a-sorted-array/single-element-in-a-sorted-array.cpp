class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int x= 0;

        for(auto y:a) x^=y;
        return x;
    }
};