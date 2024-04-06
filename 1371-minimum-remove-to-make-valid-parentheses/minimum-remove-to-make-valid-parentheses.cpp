class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>>st;
        int i,j,c=0;
        string ans;

        for(i=0;i<s.size();i++){
            if(s[i]==')' ){
                if(!st.empty() and (st.top()).first=='(') st.pop();
                else st.push({')',i});
                
            }else if(s[i]=='(') st.push({'(',i});
        }

        for(i=s.size()-1;i>=0;i--){
            if(!st.empty() and (st.top()).second==i){
                st.pop();
                continue;
            }
            else ans+=s[i];
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};