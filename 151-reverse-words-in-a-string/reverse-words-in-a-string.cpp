class Solution {
public:
    string reverseWords(string s) {
        int i,j,c=0;

        stack<string>st;

        i=0;
        while(s[i]==' ' )i++;

        for(;i<s.size();i++){
            string x ;

            while( i<s.size() and  s[i]!=' ') x+=s[i++];

            if(x!="")
            st.push(x);
        }

        string ans;

        while(!st.empty()){
            auto x = st.top();
            st.pop();
            ans+=x;

            if(!st.empty())
            ans+=' ';

            
        }

        return ans;
    }
};