class Solution {
public:



vector<string>ans;

void  f(int i,string s,string curr, vector<string>& w){
        if(i==s.size()){
            curr.pop_back();
            ans.push_back(curr);
            return;
        }

        for(auto x:w){
            int c=0,k=i;
            for(int j=0;j<x.size();j++){
                if(s[k++]!=x[j]){
                    c=1;
                    break;
                }
            }

            if(c==0){
                string v = curr;
                curr+=x;
                curr+=" ";
                f(k,s,curr,w);

                curr=v;

            }
        }

    }

//     struct comp{
//     bool operator()(string &a,string &b){
//         int i=0,n=min(a.size(),b.size());
//         for(i=0;i<n;i++){
//         if(a[i]>b[i])
//         return 1;
//         else if(a[i]<b[i])
//         return 0;
//         }

//         return b.size() > a.size();
//     }
// };



    vector<string> wordBreak(string s, vector<string>& w) {
        string curr="";
        // sort(w.begin(),w.end(),comp());
         f(0,s,curr,w);
         return ans;
    }
};