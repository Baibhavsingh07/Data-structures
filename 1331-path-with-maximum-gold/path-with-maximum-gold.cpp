class Solution {
public:

    int f(int i,int j,vector<vector<int>>& a){
        

        if(i>=a.size())
        return 0;
        if(j>=a[0].size())
        return 0;
        if(i<=-1)
        return 0;
        if(j<=-1)
        return 0;

        if(a[i][j]==0)
        return 0;

        int x=a[i][j];
        a[i][j]=0;

        int l1 = x + f(i+1,j,a);
        int l2= x +f(i,j+1,a);
        int l3= x +f(i-1,j,a);
        int l4 = x + f(i,j-1,a);

        a[i][j]=x;
        
        int x1=max(l1,l2);
        int x2 = max(l4,l3);
        return max(x2,x1);
    }


    int getMaximumGold(vector<vector<int>>& a) {
        int i,j,k,ans=0,c=0,m=0;

        for(i=0;i<a.size();i++){
            for(j=0;j<a[i].size();j++){
                ans =f(i,j,a);
                m=max(m,ans);
            }
        }
        return m;
    }
};