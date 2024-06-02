class Solution {
    public void reverseString(char[] s) {
     // Initialize two pointers i and j, pointing to the start and end of the array respectively
        int i = 0, j = s.length - 1;
        
        // Loop until the two pointers meet
        while (i < j) {
            // Swap the characters at positions i and j
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            // Move the pointers towards each other
            i++;
            j--;
        }
    }
}