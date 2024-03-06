class Solution {
public:
         vector<vector<string>>ans;


int ispalin(int i,int j,string &s){
        while(i<j) if(s[i++]!=s[j--]) return 0;

        return 1;
    }


    void f(int i,vector<string>&curr,string &s){
        if(i==s.size()){
            ans.push_back(curr);
            return ;
        }
        
        for(int j=i;j<s.size();j++){
            if(ispalin(i,j,s)){
                string axu  = s.substr(i,j-i+1);
                curr.push_back(axu);

                f(j+1,curr,s);
                curr.pop_back();
            }
        }

    }

    vector<vector<string>> partition(string s) {
        vector<string>curr;
        f(0,curr,s);
         return ans;
    }
};