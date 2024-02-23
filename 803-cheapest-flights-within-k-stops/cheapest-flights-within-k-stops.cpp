class Solution {
public:

    struct valcomp{
        bool operator()(pair<int,pair<int,int>>&a,pair<int,pair<int,int>>&b){
            if(a.first == b.first){
                return a.second.second < b.second.second;
            }else{
                return a.first < b.first;
            }
        }
    };


    int findCheapestPrice(int n, vector<vector<int>>& a, int src, int dst, int k) {
        vector<vector<pair<int,int>>>ad(n,vector<pair<int,int>>(0));
        for(auto x:a){
            ad[x[0]].push_back({x[1],x[2]});
        }

        for(auto x:ad){
        for(auto y:x)
        cout<<y.first<<" "<<y.second;
        cout<<endl;
        }

        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,valcomp>q;
        q.push({0,{src,0}});

        vector<int>v(n);
        vector<int>d(n,INT_MAX);
        d[src]=0;

        while(!q.empty()){
            auto curr = q.top();
            q.pop();

            int kk = curr.first;
            int node = curr.second.first;
            int dist = curr.second.second;

            if(kk > k)continue;


            for(auto x: ad[node] ){
                if(dist + x.second < d[x.first]  ){
                    d[x.first]=dist+x.second;
                    q.push({kk+1,{x.first,d[x.first]}});
                }
            }
        }

        if(d[dst]!=INT_MAX)return d[dst];

        return -1;
    }
};