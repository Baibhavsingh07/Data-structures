class Solution {
public:

    int f(int i,vector<int>&a){
        if(i==a.size()+1) return 1;
        
        int l=0;

        for(int j=0;j<a.size();j++){
            if(a[j]==0 and ((j+1)%i==0 or i%(j+1)==0)){
                a[j]=1;
                l=l+f(i+1,a);
                a[j]=0;
            }
        }
        return l;
    }

    int countArrangement(int n) {
     vector<int>a(n,0);

     return f(1,a);
    }
};