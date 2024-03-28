class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& aa) {
        int n=aa.size();
        vector<vector<int>>a(n,vector<int>(0));

        vector<int>d(n,0);
        vector<int>safe;

        for(int i=0;i<aa.size();i++){
            for(auto x:aa[i]){
                a[x].push_back(i);
                d[i]++;
            }
        }

        queue<int>q;

        for(int i=0;i<n;i++) if(d[i]==0) q.push(i);

        while(!q.empty()){
            auto x = q.front();
            q.pop();
            safe.push_back(x);

            for(auto y:a[x]){
                d[y]--;
                if(d[y]==0) q.push(y);
            }

        }

        sort(safe.begin(),safe.end());
        
        return safe;

    }
};