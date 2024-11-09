class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        int i,j,c=0,s=0;
        
        sort(a.begin(),a.end());

        for(i=1;i<a.size();i++) if(a[i]==a[i-1]) return true;

        return false;
    }
};