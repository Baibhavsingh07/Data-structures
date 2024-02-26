class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int i,j,n=a.size(),c=0;

        for(i=n-1;i>0;i--){
            if(a[i]>a[i-1]){
                break;
            }
        }
        if(i==0){
            sort(a.begin(),a.end());
            return;
        }
        i--;                 //1 3 4 2 5 7 6

        int x=0,ind=0;
        c=INT_MAX;

        for(j=i+1;j<n;j++){
            if(a[j]>a[i] and c>a[j]){
                c=a[j];
                ind=j;

            }
            
        }

        swap(a[i],a[ind]);

        sort(a.begin()+i+1,a.end());

        
    }
};