class Solution {
public:

    int ans=0;

    int valid(vector<int>& a,int k){
        int i,j,c=0;
        for(i=0;i<a.size();i++){
            for(j=i+1;j<a.size();j++){
                if(abs(a[i]-a[j])==k) return 0;
            }
        }
        return 1;
    }

    void f(int i,vector<int>& a,vector<int>& curr,int k){
        if(i==a.size()){
            if( curr.size()!=0 and valid(curr,k)) ans++;
            return;
        }

        f(i+1,a,curr,k);

        curr.push_back(a[i]);
        f(i+1,a,curr,k);
        curr.pop_back();
    }


    int beautifulSubsets(vector<int>& a, int k) {
        int i,j,c=0,s=0;

        vector<int>curr;
        f(0,a,curr,k);

        return ans;
    }
};