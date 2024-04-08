class Solution {
public:
    string mergeAlternately(string a, string b) {
        int i,j,c=0,s=0;

        string ans;
        i=0;j=0;

        while(i<a.size() and j<b.size()){
            if((i+j)%2==0) ans+=a[i++];
            else ans+=b[j++];
        }

        while(i<a.size()) ans+=a[i++];
        while(j<b.size()) ans+=b[j++];

        return ans;
        
    }
};