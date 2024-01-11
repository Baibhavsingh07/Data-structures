class Solution {
public:
    int maxArea(vector<int>& a) {
        int i = 0, j = a.size() - 1;

        int m = 0;
        while (i < j) {
            m = max(m, min(a[i], a[j]) * (j - i));
            if (a[i] > a[j])
                j--;
            else
                i++;
        }

        return m;
    }
};