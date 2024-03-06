class Solution {
public:
         vector<vector<string>>ans;


int ispalin(int i,int j,string &s){
        while(i<j) if(s[i++]!=s[j--]) return 0;

        return 1;
    }


    vector<vector<string>> f(int i,vector<string>&curr,string &s){
        if(i==s.size()){
            return {{}};
        }

                vector<vector<string>>ans;

        
        for(int j=i;j<s.size();j++){
            if(ispalin(i,j,s)){
                string axu  = s.substr(i,j-i+1);
                

                auto x = f(j+1,curr,s);
                for(auto &v:x){ v.insert(v.begin(),axu);
                    ans.push_back(v);
                }

                // cout<<typeid(x).name();

            }
        }
        return ans;

    }

    vector<vector<string>> partition(string s) {
        vector<string>curr;
       return f(0,curr,s);
         return ans;
    }
};