class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        if(a.size()<2) return a;

        int m1,m2,mc1=0,mc2=0,i;

        for(i=0;i<a.size();i++){
            if(m2!=a[i] and mc1==0 ){
                m1=a[i];
                mc1=1;
            }else if(m1!=a[i] and mc2==0){
                m2=a[i];
                mc2=1;
            }else if(m1==a[i]){
                mc1++;
            }else if(m2==a[i]){
                mc2++;
            }else{
                mc2--;
                mc1--;
            }

        }

        int c1=0,c2=0;

        for(auto x:a){
            if(x==m1) c1++;
            else if(x==m2) c2++;
        }

        int n=a.size();

        if(c1> n/3 and c2> n/3){ 
             if(m1==m2) return {m1};
            else return {m1,m2};
        }

        if(c1>n/3) return {m1}; 
        if(c2>n/3) return {m2}; 

        return {};

    }
};