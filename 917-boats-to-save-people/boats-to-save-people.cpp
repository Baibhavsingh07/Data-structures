class Solution {
public:
    int numRescueBoats(vector<int>& a, int l) {
        sort(a.begin(),a.end());

        int i=0,j=a.size()-1,c=0;

        while(i<=j){
            if(a[i]+a[j]<=l){
                c++;
                i++;
                j--;
            }else if(a[j]<=l){
                c++;
                j--;
            }else{
                c++;
                i++;
            }
        }

        return c;
    }
};