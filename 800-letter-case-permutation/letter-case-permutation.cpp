class Solution {
public:
        vector<string>ans;

    void f(int i,string &curr,string &a){
        if(i==a.size()){
            ans.push_back(curr);
            return;
        }

        curr+=a[i];
            f(i+1,curr,a);
            curr.pop_back();

        if(a[i]>=97 and a[i]<123  ){
            

            curr=curr +char( a[i]-32);
            f(i+1,curr,a);
            curr.pop_back();
        }else if(a[i]>=65 and a[i]<91 ){
            curr=curr +char( a[i]+32);
            f(i+1,curr,a);
            curr.pop_back();
        }
    }

    vector<string> letterCasePermutation(string s) {
        string curr="";

        f(0,curr,s);
        return ans;
    }
};