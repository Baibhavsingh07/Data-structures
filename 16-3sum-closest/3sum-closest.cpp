class Solution {
public:
    int threeSumClosest(vector<int>& a, int t) {
        int i,j,k,c=0,s=0;

        sort(a.begin(),a.end());

        int ans,pd=INT_MAX;
        for(i=0;i<a.size();i++){
            j=i+1;
            k=a.size()-1;

            while(j<k){
                int sum = a[i]+a[j]+a[k];
                if(abs(t-sum)<pd) {ans=sum;
                pd=abs(t-sum);}

                if(sum==t) return t;

                if(sum > t) k--;
                else j++;
            }
        }

        return ans;
    }
};