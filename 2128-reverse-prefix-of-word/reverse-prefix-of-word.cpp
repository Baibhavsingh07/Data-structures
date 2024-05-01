class Solution {
public:
    string reversePrefix(string a, char ch) {
        int ind = a.find(ch);

        if(ind==-1) return a;

        reverse(a.begin(),a.begin()+ind+1);
        return a;
    }
};