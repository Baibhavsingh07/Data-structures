class Solution {
public:
    int findMin(vector<int>& a) {
        int i,j,c=0,s=0;

        return *min_element(a.begin(),a.end());
    }
};