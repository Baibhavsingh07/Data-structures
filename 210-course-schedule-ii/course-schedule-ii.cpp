class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& aa) {
        vector<int>v(n,0);
        vector<int>d(n,0);
        vector<int>ans;

        vector<vector<int>>a(n,vector<int>(0));

        for(int i=0;i<aa.size();i++){
            a[aa[i][1]].push_back(aa[i][0]);
        }

        for(auto x:a)
        for(auto y:x)
        d[y]++;


        queue<int>q;
        for(int i=0;i<n;i++)
        if(d[i]==0)
        q.push(i);

        while(!q.empty()){
            auto x = q.front();
            q.pop();

            for(auto y:a[x]){
                d[y]--;
                if(d[y]==0)
                q.push(y);
                
            }

            ans.push_back(x);
        }

        if(ans.size()!=n) return {};

        return ans;
    }
};