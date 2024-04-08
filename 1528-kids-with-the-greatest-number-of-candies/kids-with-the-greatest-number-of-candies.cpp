class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& a, int k) {
        int i,m=0,j,c=0,s=0;
        vector<bool> v;

        for(i=0;i<a.size();i++){
            m=max(m,a[i]);
        }

        for(i=0;i<a.size();i++){
            if(m<=a[i]+k){
                v.push_back(1);
            }
            else
            v.push_back(0);
        }
        return v;
        
    }
};