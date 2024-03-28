#include <vector>
#include <queue>
#include <set>

using namespace std;

class Solution {
public:
    int nearestExit(vector<vector<char>>& a, vector<int>& x) {
        int n = a.size(), m = a[0].size();
        queue<vector<int>> q;
        q.push(x);

        a[x[0]][x[1]]='+';

        set<vector<int>> v;
        v.insert(x);

        int dis = 1;
        vector<vector<int>> directions = {{0,1},{0,-1},{1,0},{-1,0}};

        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; ++i) {
                auto node = q.front();
                q.pop();

                for (const auto& d : directions) {
                    int nx = node[0] + d[0];
                    int ny = node[1] + d[1];

                    if (nx >= 0 && ny >= 0 && nx < n && ny < m && a[nx][ny] == '.') {
                        if (nx == 0 || ny == 0 || nx == n - 1 || ny == m - 1) return dis;

                        if (v.find({nx, ny}) == v.end()) {
                            q.push({nx, ny});
                            v.insert({nx, ny});
                        }
                    }
                }
            }
            dis++;
        }

        return -1;
    }
};
