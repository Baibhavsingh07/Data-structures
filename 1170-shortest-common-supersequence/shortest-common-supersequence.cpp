class Solution {
public:
    string shortestCommonSupersequence(string a, string b) {
        int n1=a.size(),n2=b.size();
        vector<vector<int>>tbl(n1+1,vector<int>(n2+1,0));

        int i,j;

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

        // cout<<tbl[0][0];

        i=n1,j=n2;
        string ans="";

        while(i!=0 and j!=0){
            if(a[i-1]==b[j-1]){
                ans+=a[i-1];
                i--;j--;
                
            }else{
                if(tbl[i-1][j]>tbl[i][j-1])
                i--;
                else
                j--;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans;

        string x ="";
        i=0,j=0;
        int k=0;

        while(i!=n1 or j!=n2){
            int c=0;
            
            if(a[i]==b[j] and a[i]==ans[k]){
                x+=ans[k];
                i++;
                j++;
                k++;
            }else if(a[i]==ans[k]){
                x+=b[j++];
            }else
            x+=a[i++];

        
        }


        return x;

    }
};