class Solution {
public:
    string tar;

    int tonum(int x, int y, int z, int w) {
        return 1000 * x + 100 * y + 10 * z + w;
    }

    int openLock(vector<string>& d, string t) {
        unordered_set<string> dead(d.begin(), d.end());

        tar = t;

        vector<int> v(10000, 0);

        queue<vector<int>> q;
        q.push({0, 0, 0, 0});
        v[0] = 1;

        if (tar == "0000") return 0;
        if (dead.count("0000")) return -1;

        int ans = 0;

        while (!q.empty()) {
            int l = q.size();

            for (int i = 0; i < l; ++i) {
                auto a = q.front();
                q.pop();

                int x = a[0];
                int y = a[1];
                int z = a[2];
                int w = a[3];

                for (int j = 0; j < 4; ++j) {
                    for (int k = -1; k <= 1; k += 2) {
                        int n = (a[j] + k + 10) % 10;
                        vector<int> next = {x, y, z, w};
                        next[j] = n;
                        int num = tonum(next[0], next[1], next[2], next[3]);
                        string s = to_string(next[0]) + to_string(next[1]) + to_string(next[2]) + to_string(next[3]);

                        if (s == tar) return ans + 1;
                        if (dead.count(s) || v[num]) continue;

                        q.push(next);
                        v[num] = 1;
                    }
                }
            }
            ans++;
        }

        return -1;
    }
};