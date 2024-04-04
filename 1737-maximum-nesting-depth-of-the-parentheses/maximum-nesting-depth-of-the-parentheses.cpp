class Solution {
public:
    int maxDepth(string s) {
        int i,j,c=0,ans=0;

        for(i=0;i<s.size();i++){
            if(s[i]=='('){c++;
            ans=max(ans,c);}
            else if(s[i]==')')
            c--;
        }

        return ans;
    }
};