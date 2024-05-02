class Solution {
public:
    int findMaxK(vector<int>& a) {
        int c=-1;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a.size();j++){
                if(a[i]==-a[j]) c=max(c,a[i]);
            }
        }

        return c;
    }
};