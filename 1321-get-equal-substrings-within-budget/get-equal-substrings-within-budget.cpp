class Solution {
public:
    int equalSubstring(string s, string t, int mc) {
        int i,j,c=0,ans=0;
        
        unordered_map<char,int>map;
        i=0,j=0;
        for(j=0;j<s.size();j++){
            ans=max(ans,j-i);

            map[s[j]]++;
            mc-=(abs(s[j]-t[j]));

            while( i<=j and mc<0){
                map[s[i]]--;
                mc+=(abs(s[i]-t[i]));
                i++;
            }
        }

        return max(ans,j-i);
    }
};