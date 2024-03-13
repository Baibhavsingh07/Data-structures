class Solution {
public:
    int singleNumber(vector<int>& a) {
        vector<int>b(33,0);

        for(auto x:a){
            for(int i=0;i<32;i++){
                if(x & (1<<i)){
                    b[i]++;
                }
            }
        }

        int ans=0;

        for(int i=0;i<32;i++){
            if(b[i]%3!=0){
                ans = ans | (1<<i);
            }
        }
        return ans;

    }
};