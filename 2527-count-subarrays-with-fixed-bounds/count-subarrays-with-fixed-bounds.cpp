class Solution {
public:
    long long countSubarrays(vector<int>& a, int mink, int maxk) {
        long long ans=0;
        int i,j=-1,c=0,s=0;
        int pmini=-1,pmaxi=-1;

        for(i=0;i<a.size();i++){
            if(a[i]<mink or a[i]>maxk) j=i;

            if(a[i]==mink) pmini=i;
            if(a[i]==maxk) pmaxi=i;

            if(pmini!=-1 and pmaxi!=-1)
            ans=ans + max(0, min(pmini,pmaxi)-j);
        }
        return ans;
    }
};