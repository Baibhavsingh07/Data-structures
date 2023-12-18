class Solution {
public:

    // int f(int i,int j,string& a,string& b,vector<vector<int>>&tbl){
    //     if(i==a.size() or j==b.size())
    //     {
    //         return 0;
    //     }

    //     if(tbl[i][j]==-1){
    //     int l=0,r=0;
    //    if(a[i]==b[j]){
    //        l = 1+f(i+1,j+1,a,b,tbl);
    //    }
    //    if(a[i]!=b[j]){
    //        l = f(i,j+1,a,b,tbl);
    //        r = f(i+1,j,a,b,tbl);
    //    }

    //    tbl[i][j] =  max(l,r);
    //     }
    //     return tbl[i][j];
    // }

    int longestCommonSubsequence(string a, string b) {
        int i,j,k,c=0,s=0;

        vector<vector<int>>tbl(a.size()+1,vector<int>(b.size()+1,0));

        for(i=1 ;i<=a.size();i++){
            for(j=1;j<=b.size();j++){
                int l=0,r=0;
                if(a[i-1]==b[j-1]){
                    l = 1+tbl[i-1][j-1];
                }
                else{
                    l = tbl[i][j-1];
                    r = tbl[i-1][j];
                }

                tbl[i][j]=max(l,r);
            }
        }

        string ans="";
        i=a.size();
        j=b.size();

        while(i!=0 and j!=0){
            if(a[i-1]==b[j-1]){
                ans+=a[i-1];
                i--;
                j--;
            }else{
                if(tbl[i-1][j] > tbl[i][j-1])
                i--;
                else
                j--;
            }

            
        }

        reverse(ans.begin(),ans.end());

        cout<<ans;

        return tbl[a.size()][b.size()];


       
        
    }
};