public class Solution {
    public int minOperations(String s) {
        int c = 0, x = 0;

        for (int i = 0; i < s.length(); i++) {
            if (i % 2 == 0 && s.charAt(i) == '0')
                c++;
            if (i % 2 == 1 && s.charAt(i) == '1')
                c++;

            if (i % 2 == 0 && s.charAt(i) == '1')
                x++;
            if (i % 2 == 1 && s.charAt(i) == '0')
                x++;
        }

        System.out.println(c + " " + x);

        return Math.min(c, x);
    }
}