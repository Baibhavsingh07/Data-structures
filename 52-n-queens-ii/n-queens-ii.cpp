class Solution {
public:

    void f(int i,vector<string>&curr,vector<vector<string>>&ans){
        if(i==curr.size()){
            ans.push_back(curr);
            return;
        }

        int n=curr.size();

        for(int j=0;j<n;j++){
            bool legal = 1;
            for(int k=0;k<i;k++){
                if(( (j-(i-k) >= 0) and (curr[k][j-(i-k)] == 'Q')) or (curr[k][j] == 'Q') or (j+(i-k)<n and (curr[k][j+(i-k)]=='Q'))){
                    legal =0;
                    break;
                }
            }
            if(legal){
            curr[i][j]='Q';
            f(i+1,curr,ans);
            curr[i][j]='.';
        }
        }
        
    }

    int totalNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>curr(n,string(n,'.'));

        vector<int>visit(n);
        f(0,curr,ans);

        return ans.size();
        
    }
};