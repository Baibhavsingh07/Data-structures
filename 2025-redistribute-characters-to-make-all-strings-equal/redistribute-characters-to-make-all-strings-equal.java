class Solution {
    public boolean makeEqual(String[] a) {
        int[] map = new int[27];

        for (String x : a)
            for (char y : x.toCharArray())
                map[y - 'a']++;

        int n = a.length;

        for (int x : map)
            if (x % n != 0) return false;

        return true;
    }
}