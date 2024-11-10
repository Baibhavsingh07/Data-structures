class Solution {
public:
    int findMin(vector<int>& a) {
        int i,j,c=0,s=0;

        for(i=0;i<a.size()-1;i++){
            if(a[i]>a[i+1]) return a[i+1];
        }

        return a[0];
    }
};