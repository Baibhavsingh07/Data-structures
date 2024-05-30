class Solution {
public:
    int countTriplets(vector<int>& a) {
        int i,j,c=0,s=0;

        for(i=0;i<a.size();i++){
            int x=0;
            for(j=i;j<a.size();j++){
                x^=a[j];

                int y=0;
                for(int k=j+1;k<a.size();k++){
                    y^=a[k];

                    if(y==x)c++;
                }
            }
        }
        return c;
    }
};