class Solution {
public:
    int numberOfSubstrings(string s) {
        int i,j,l=0,r=0,ans=0;
        vector<int>a(3);

        while(r<s.size()){
            a[s[r]-'a']++;

            while(a[0]!=0 and a[1]!=0 and a[2]!=0){
                ans=ans+s.size()-r;
                a[s[l]-'a']--;
                l++;
            }
            r++;
        }
        return ans;
    }
};