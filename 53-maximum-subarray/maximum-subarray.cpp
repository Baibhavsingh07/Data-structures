class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int i,c=0,m=INT_MIN;

        for(i=0;i<a.size();i++){
            if(c<0){
                c=a[i];
                m=max(m,c);

                
            }else{
                c+=a[i];
                m=max(m,c);
            }
        }

        return m;
    }
};