class Solution {
public:
    bool isPalindrome(int x) {
        string c = to_string(x);

        int i=0,j=c.size()-1;

        while(i<j){ if(c[i]!=c[j]) return 0; i++;j--;}

        return 1;
    }
};