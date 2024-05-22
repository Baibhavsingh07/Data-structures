class Solution {
public:
        vector<vector<string>>ans;

        int ispal(vector<string>&a){
            for(auto x:a){
                int i=0,j=x.size()-1;
                while(i<j){
                    if(x[i]!=x[j]) return 0;
                    i++;j--;
                }
            }
            return 1;
        }

        void f(int i,string s,vector<string>&curr){
            if(i==s.size()){
                if(ispal(curr)) ans.push_back(curr);
                return;
            }

            string a;
            for(int j=i;j<s.size();j++){
                a+=s[j];
                curr.push_back(a);

                f(j+1,s,curr);
                curr.pop_back();

            }
        }

    vector<vector<string>> partition(string s) {
        vector<string>curr;

        f(0,s,curr);

        return ans;

    }
};