class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& a) {
        int n=a.size();
        vector<int>v(n,0);

        queue<int>q;
        q.push(0);
        v[0]=1;

        while(!q.empty()){
            auto x = q.front();
            q.pop();

            for(auto xx:a[x])
            if(!v[xx]){
                v[xx]=1;
                q.push(xx);
            }
        }

        for(auto x:v)if(x==0) return 0;

        return 1;
    }
};