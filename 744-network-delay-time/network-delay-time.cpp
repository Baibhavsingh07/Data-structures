class Solution {
public:
    
    struct comp{
        char operator()(vector<int>&a,vector<int>&b){
            return a[0]<b[0];
        }  
    };
    
    
    int networkDelayTime(vector<vector<int>>& t, int n, int k) {
        vector<vector<vector<int>>>a(n+1,vector<vector<int>>(0));
        
        for(auto x:t){
            a[x[0]].push_back({x[1],x[2]});
        }
    
        priority_queue<vector<int>, vector<vector<int>>, comp >q;
            
        q.push({0,k});
        int l=0;
        
        vector<int>v(n+1,INT_MAX);
        v[k]=0;
        
        while(!q.empty()){
            auto x=q.top();
            q.pop();
            
      
            
            for(auto y:a[x[1]]){
                
                    if(v[y[0]] > x[0]+y[1]){
                        v[y[0]]=x[0]+y[1];
                    q.push({x[0]+y[1],y[0]});

                    
                }
            }
        }
        
        for(int i=1;i<n+1;i++)if(v[i]==INT_MAX) return -1;
        for(int i=1;i<n+1;i++) l = max(l,v[i]);
        return l;
    
        
    
    }
};