class Solution {
public:


    string removeKdigits(string s, int k) {
        int i,j,c=0;
        string ans;

        if(k>=s.size()) return "0";

        stack<char>st;

        for(i=0;i<s.size();i++){
            while(k>0 and !st.empty() and st.top()>s[i]){
                st.pop();
                k--;
            }
            st.push(s[i]);
        }

       

        while(st.size() and k--){
            st.pop();
        }

         while(!st.empty()){
            auto x = st.top();
            st.pop();
            ans+=x;
        }

        // cout<<ans;

        while( ans.size() and ans.back()=='0') ans.pop_back();

        reverse(ans.begin(),ans.end());

        if(ans.size()==0) ans="0";

        return ans;
    }
};