class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int l=0,r=0,i,j,c=0,s=0;

        int x = a.size()-k;

        for(r=0;r<x;r++)c+=a[r];

        s = c;

        int sum = accumulate(a.begin(),a.end(),0);

        for(;r<a.size();r++){
            c-=a[l];
            l++;
            c+=a[r];

            s=min(s,c);
        }

        return  sum - s;
    }
};