//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
        
    private:
    void dfs(int node,vector<int> adj[],vector<int>&ans,vector<int>&visit){
        ans.push_back(node);
        visit[node]=1;
        
        for(auto x:adj[node]){
            if(visit[x]==0)
            dfs(x,adj,ans,visit);
        }
        
    }
    
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        vector<int>ans;
        vector<int>visit(v,0);
        
        dfs(0,adj,ans,visit);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends