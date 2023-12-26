class Solution {
public:

    // map<pair<int,int>,int>tbl;
    vector<vector<int>>tbl;

    int minDistance(string a, string b) {
        tbl.resize(a.size()+1,vector<int>(b.size()+1,0));

        for(int i=0;i<=a.size();i++)
        tbl[i][0] = i;
        for(int j=0;j<=b.size();j++)
        tbl[0][j] = j;

        for(int i=1;i<=a.size();i++){
            for(int j=1;j<=b.size();j++){
                int match=INT_MAX-1,replace=INT_MAX-1,del = INT_MAX-1,insert = INT_MAX-1;
                if(a[i-1]==b[j-1]){
                    match = tbl[i-1][j-1];
                }
                    replace = 1+tbl[i-1][j-1];
                    del = 1+tbl[i-1][j];
                    insert = 1+ tbl[i][j-1];
                
                
                tbl[i][j] = min(insert,min(replace,min(match,del)));

            }
        }
       
        return tbl[a.size()][b.size()];

    }
};