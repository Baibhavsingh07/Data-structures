class Solution {
public:
    bool halvesAreAlike(string s) {
        string a = "aeiouAEIOU";
        int c=0;
        for(int i=0;i<s.size()/2;i++){
            for(auto x:a){
                if(x==s[i])
                { c++;
                break;}
            }
        }

        for(int i=s.size()/2;i<s.size();i++){
            for(auto x:a){
                if(x==s[i]){ c--;
                break;}
            }
        }

        return c==0;
    }
};