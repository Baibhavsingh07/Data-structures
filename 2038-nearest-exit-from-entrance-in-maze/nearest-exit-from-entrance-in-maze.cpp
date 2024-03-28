class Solution {
public:
    int nearestExit(vector<vector<char>>& a, vector<int>& x) {
        int n=a.size(),m=a[0].size();
        queue<vector<int>>q;
        q.push(x);

        set<vector<int>>v;
        v.insert(x);
        a[x[0]][x[1]]='+';


        int dis=1;
        while(!q.empty()){
            int l = q.size();
            while(l--){
                auto node= q.front();
                q.pop();

                vector<vector<int>>d = {{0,1},{0,-1},{1,0},{-1,0}};

                for(auto vv:d){
                    int nx = node[0]+vv[0];
                    int ny = node[1]+vv[1];
                    if(nx>=0 and ny>=0 and nx<n and ny<m and a[nx][ny]=='.'){
                        if(nx==0 or ny==0 or nx==n-1 or ny==m-1) return dis;

                        q.push({nx,ny});
                        a[nx][ny]='+';
                    }
                }
            }
            dis++;
        }

        return -1;
    }
};