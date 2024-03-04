class Solution {
public:
    int bagOfTokensScore(vector<int>& a, int power) {
        sort(a.begin(),a.end());

        int i=0,j=a.size()-1,ans=0,s=0;

        while(i<=j){
            if(power>=a[i]){
                s++;
                ans=max(ans,s);
                power-=a[i++];
            }else{
                s--;
                power+=a[j--];
            }

            if(s<0)return ans;
        }

        return ans;
    }
};