class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vis(n,-1);
        for(int i=0;i<n;i++){
            if(vis[i] == -1){
                if(!check(i,0,vis,graph))
                    return false;
            }
        }
        return true;
    }
    
    bool check(int start, int color, vector<int> &vis, vector<vector<int>> &graph){
        vis[start] = color;
        for(auto it:graph[start]){
            if(vis[it] == -1){
                if(!check(it, !color, vis, graph))
                    return false;
            }
            else if(vis[it] == color)
                    return false;
        }
        return true;
    }
};