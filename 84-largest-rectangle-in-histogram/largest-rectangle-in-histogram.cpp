class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        stack<int>st;
        int n=a.size();
        vector<int>v1(n),v2(n);

        for(int i=n-1;i>=0;i--){
            while(!st.empty() and a[st.top()] >= a[i] ) st.pop();
            if(st.empty())v1[i]=n;
            else v1[i]=st.top();

            st.push(i);
        }

        while(!st.empty()) st.pop();

        for(int i=0;i<n;i++){
            while(!st.empty() and a[st.top()] >= a[i] ) st.pop();
            if(st.empty())v2[i]=-1;
            else v2[i]=st.top();

            st.push(i);

        }

        int m=0;

        for(int i=0;i<n;i++){
            m = max(m,a[i]*(v1[i]-v2[i]-1));
        }

        // for(int i=0;i<n;i++)cout<<v1[i]<<" "<<v2[i]<<endl;

        return m;


    }
};