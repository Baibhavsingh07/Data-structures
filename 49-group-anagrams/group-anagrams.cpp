class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
       vector<vector<string>>ans;
        
      map<vector<int>, vector<string>>mp;
      
        
        for(int i = 0 ; i < strs.size() ; i++)
        {
            vector<int>v(26);
            string s = strs[i];
            for(auto k:s){
                v[k-'a']++;

            }
            cout<<s<<endl;
            mp[v].push_back(s);
            
        }
        
        
        for(auto i : mp)
        {
            ans.push_back(i.second);
        }

        return ans;
        
    }
};