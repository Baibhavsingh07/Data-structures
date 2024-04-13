class Solution {
public:


    int f(vector<int>&a){
        int i,j,c=0,s=0;

        stack<int>st;
        vector<int>v1,v2;

        for(i=0;i<a.size();i++){
            while(!st.empty() and a[st.top()]>=a[i]) st.pop();

            if(!st.empty())v1.push_back(st.top());
            else v1.push_back(-1);

            st.push(i);
        }

        while(!st.empty()) st.pop();

        for(i=a.size()-1;i>=0;i--){
            while(!st.empty() and a[st.top()]>=a[i] ) st.pop();

            if(!st.empty())v2.push_back(st.top());
            else v2.push_back(a.size());

            st.push(i);

        }

        reverse(v2.begin(),v2.end());

        for(i=0;i<v1.size() and i<v2.size();i++)cout<<v1[i]<<" "<<v2[i]<<endl;

        int m=0;

        for(int i=0;i<a.size();i++){
            m = max(m,a[i]*(v2[i]-v1[i]-1));
        }

        // for(int i=0;i<n;i++)cout<<v1[i]<<" "<<v2[i]<<endl;

        return m;


    }


    int maximalRectangle(vector<vector<char>>& a) {
        int i,j,c=0,s=0;

        vector<int>v(a[0].size());

        for(i=0;i<a.size();i++){
            for(j=0;j<a[0].size();j++){
                if(a[i][j]=='0')v[j]=0;
                else v[j]+=1;
            }

            c= max(c,f(v));
        }

        return c;


    }
};