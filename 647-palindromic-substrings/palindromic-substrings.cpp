class Solution {
public:

    int ispalin(string s){
        int i=0,j=s.size()-1;
        while(i<j){
            if(s[i++]!=s[j--])
            return 0;
        }
        return 1;
    }


    int countSubstrings(string s) {
        int i,j,k,c=0;

        for(i=0;i<s.size();i++){
            string s1="";
            
            for(j=i;j<s.size();j++){
                s1+=s[j];

                if(ispalin(s1))
                c++;
            }
        }
        return c;
    }
};