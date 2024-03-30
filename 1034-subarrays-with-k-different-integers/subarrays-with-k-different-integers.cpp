class Solution {
public:
    int f(vector<int>& a, int k) {
        int l = 0, r = 0, ans = 0;
        unordered_map<int, int> map;

        while (r < a.size()) {
            map[a[r]]++;
            while (map.size() > k) {
                if (--map[a[l]] == 0) {
                    map.erase(a[l]);
                }
                l++;
            }
            ans += r - l + 1;
            r++;
        }
        return ans;
    }

    int subarraysWithKDistinct(vector<int>& a, int k) {
        int lessequalk = f(a, k);
        int lessequalkminus1 = f(a, k - 1);

        cout << lessequalk << " " << lessequalkminus1;

        return lessequalk - lessequalkminus1;
    }
};