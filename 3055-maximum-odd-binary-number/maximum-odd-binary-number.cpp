class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string ans="";
        int i,j,c=0;

        int ones = count(s.begin(),s.end(),'1');
        int zeroes = s.size()-ones;

        ones--;

        while(ones--)
        ans+='1';

        while(zeroes--)
        ans+='0';

        ans+='1';


        return ans;

    }
};