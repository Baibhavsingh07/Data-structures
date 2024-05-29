
class Solution {
public:
    int numSteps(string a) {
        int c = 0;
        
        for (int i = a.size() - 1; i > 0; ) {
            if (a[i] == '0') {
                c++;
                i--;
            } else {
                c++; // for the conversion from '1' to '0'
                while (i >= 0 && a[i] == '1') {
                    c++; // for the consecutive '1's
                    i--;
                }
                if (i >= 0)
                    a[i] = '1'; // flip the last '1' to '0'
                else
                    a = '1' + a; // if we reach the most significant bit, add '1' to the beginning
            }
        }
        
        return c;
    }
};
