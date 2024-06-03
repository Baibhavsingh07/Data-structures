class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,j=0,c=0,ans=0;

        while(i<s.size() and j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
            }else{
                i++;
            }
        }

        return t.size()-j;
    }
};