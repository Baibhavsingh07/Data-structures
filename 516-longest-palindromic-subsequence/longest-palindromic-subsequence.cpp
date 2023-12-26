class Solution {
public:

    // map<pair<int,int>,int>tbl;
    vector<vector<int>>tbl;

    int longestPalindromeSubseq(string s) {
        
       int i,j,k,c=0;
        string a = s;
        reverse(s.begin(),s.end());

        tbl.resize(a.size()+1,vector<int>(a.size()+1,0));

        for(i=a.size()-1;i>=0;i--){
            for(j=a.size()-1;j>=0;j--){
                int l=0,r=0;
                
                if(a[i] == s[j])
                tbl[i][j] = 1 + tbl[i+1][j+1];
                else
                tbl[i][j] = max(tbl[i+1][j],tbl[i][j+1]);
    
            }
        }

        return tbl[0][0];
        
    }
};