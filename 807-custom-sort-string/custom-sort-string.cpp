class Solution {
public:
    string customSortString(string o, string s) {
        string ans="";

        vector<int>a(s.size(),0);

        for(auto i=0;i<o.size();i++){
            for(auto y=0;y<s.size();y++){
                if(o[i]==s[y]){
                    ans+=o[i];
                    a[y]=1;
                }
            }
            }

        for(int i=0;i<s.size();i++){
            if(a[i]==0){
                ans+=s[i];
            }
        }

        return ans;

        
        
    }
};