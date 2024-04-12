class Solution {
public:
    int minimumRefill(vector<int>& a, int u, int v) {
        int i,j,c=0,s=0;

        int n1=u,n2=v;

        i=0;j=a.size()-1;

        while(i<=j){

            if(i==j){
                int m=max(u,v);

                if(m>=a[i]) return c;
                else return c+1;
            }

            if(a[i]>u){
                u=n1-a[i];
                c++;
            }else u-=a[i];

            if(a[j]>v){
                v=n2-a[j];
                c++;
            }else v-=a[j];

            i++;
            j--;
        }

        return c;
    }
};