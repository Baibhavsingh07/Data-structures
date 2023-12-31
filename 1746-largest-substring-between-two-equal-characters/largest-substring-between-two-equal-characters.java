public class Solution {
    public int maxLengthBetweenEqualCharacters(String s) {
        int c = -1;
        Map<Character, Integer> map = new HashMap<>();

        for (int i = 0; i < s.length(); i++) {
            if (!map.containsKey(s.charAt(i))) {
                map.put(s.charAt(i), i);
            } else {
                int x = map.get(s.charAt(i));
                c = Math.max(c, i - x - 1);
            }
        }

        return c;
    }
}