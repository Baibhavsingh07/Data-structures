class Solution {
public:
    int majorityElement(vector<int>& a) {
        int i,j,c=0,s=0;
        int m=a[0],mc=1;

        for(i=1;i<a.size();i++){
            if(m!=a[i] and mc==0){
                m=a[i];
                mc=1;
            }else if(m==a[i]){
                mc++;
            }else {
                mc--;
            }
        }
        return m;
    }
};