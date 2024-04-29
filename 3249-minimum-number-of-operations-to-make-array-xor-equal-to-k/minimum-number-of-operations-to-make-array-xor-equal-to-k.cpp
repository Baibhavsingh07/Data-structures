class Solution {
public:
    int minOperations(vector<int>& a, int k) {
        int c=0;

        int x=0;
        for(auto y:a)x^=y;
        x^=k;

        while(x){
            int r = x%2;
            if(r==1)c++;
            x/=2;
        }

        return c;

        
    }
};