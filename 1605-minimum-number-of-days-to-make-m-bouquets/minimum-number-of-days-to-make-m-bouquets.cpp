class Solution {
public:

    int poss(int m,vector<int>& a, int n, int k ){
        int c=0,s=0,i=0,j=0;

        while(i<a.size()){
            while(i<a.size() and a[i]>m){
               i++;
            }
            c=0;
            while(i<a.size() and a[i]<=m){
                c++;i++;
            }
            s+=c/k;

        }
        if(s>=n) return 1;
        return 0;
    }


    int minDays(vector<int>& a, int n, int k) {
        int l=1,h=0;
        int i,c=0,s=0;

        for(auto x:a ) if(x>h) h=x;

        int ans=INT_MAX;

        while(l<=h){
            int m = l+(h-l)/2;

            if(poss(m,a,n,k)){
                ans=min(ans,m);
                h=m-1;
            }else{
                l=m+1;

            }
        }

        return ans==INT_MAX?-1:ans;
    }
};