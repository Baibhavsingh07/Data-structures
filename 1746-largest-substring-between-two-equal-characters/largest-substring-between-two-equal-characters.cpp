class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int i,j,k,c=-1;

        for(i=0;i<s.size();i++){
            for(j=i+1;j<s.size();j++){
                if(s[i]==s[j]){
                    c=max(c,j-i-1);
                }
            }
        }
        return c;
    }
};