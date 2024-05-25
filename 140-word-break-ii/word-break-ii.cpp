class Solution {
public:
        vector<string>ans;

    void f(int i,string curr,string s,unordered_set<string>&map){
        if(i==s.size()){
            
            ans.push_back(curr);
            return;
        }

        string x;
                string currl=curr;

        for(int j=i;j<s.size();j++){
            x+=s[j];
            if(map.find(x)!=map.end()){
                if(curr!="")
                curr+=" ";
                curr+=x;
                f(j+1,curr,s,map);
                curr=currl;
            }
        }
    }

    vector<string> wordBreak(string s, vector<string>& w) {
        int i,j,c=0;

        unordered_set<string>set(w.begin(),w.end());
        string curr="";
        f(0,curr,s,set);

        return ans;
    }
};