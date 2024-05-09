class Solution {
public:
    long long maximumHappinessSum(vector<int>& a, int k) {
        long long ans=0;
        int i,j,c=0,s=0;

        sort(a.begin(),a.end(),greater<int>());

        for(i=0;i<k;i++){
            if(a[i]-c>0){
                ans+=a[i]-c;
                
            }
            c++;
        }

        return ans;
    }
};