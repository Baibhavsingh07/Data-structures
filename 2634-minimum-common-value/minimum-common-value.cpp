class Solution {
public:
    int getCommon(vector<int>& a, vector<int>& b) {
        int i,j,k,c=0,s=0;
        i=0;
        j=0;
        while(i<a.size() and j<b.size()){
            if(a[i]==b[j])
            return a[i];
            else if(a[i]>b[j]){
                j++;
            }else{
                i++;
            }
        }
        return -1;
        
    }
};