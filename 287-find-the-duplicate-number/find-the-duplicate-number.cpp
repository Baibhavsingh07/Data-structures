class Solution {
public:
    int findDuplicate(vector<int>& a) {
        vector<int>b(100001,0);

        for(auto x:a) b[x]++;

        for(int i=0;i<b.size();i++) if(b[i]>1) return i;

        return -1;
    }
};