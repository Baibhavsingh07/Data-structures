class Solution {
public:
    int buyChoco(vector<int>& a, int k) {
        int x=k;

        sort(a.begin(),a.end());

        if(x >= a[0]+a[1])
        return x-a[0]-a[1];
        else
        return x;
    }
};