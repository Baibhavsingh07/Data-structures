class Solution {
public:
    int minimumLength(string s) {
        int i,j,c=0;
        i=0;j=s.size()-1;

        while(i<j){
            if(s[i]==s[j]){
                while( i+1<j and s[i+1]==s[i]) i++;
                while(i<j-1 and s[j-1]==s[j]) j--;

                i++;j--;

                

            }else break;
        }

        return j-i+1;
    }
};