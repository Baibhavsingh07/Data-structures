class Solution {
public:
    int specialArray(vector<int>& a) {
        int i,j,c=0,s=0;

        for(i=0;i<=a.size();i++){
            int curr=i;
            c=0;
            for(auto x:a) if(x>=curr) c++;

            if(c==i) return i;
        }
        return -1;
    }
};