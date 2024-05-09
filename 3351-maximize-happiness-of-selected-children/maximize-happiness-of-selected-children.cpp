class Solution {
public:
    long long maximumHappinessSum(vector<int>& a, int k) {
        long long ans=0;
        int i,j,c=0,s=0;

        multiset<int>set;

        for(auto x:a)set.insert(x);

        while(k-- and !set.empty()){
            auto x = *set.rbegin();
            set.erase(prev(set.end()));

            if(x-c >0)
            ans = ans + x-c;
            c++;
        }

        return ans;
    }
};