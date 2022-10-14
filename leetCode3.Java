public static int leetCode3哈希表(String s) {
        int n = s.length();
        if (n <= 1) return n;
        int maxLen = 1;
        int left = 0, right = 0;
        Map<Character, Integer> window = new HashMap<>();
        while (right < n) {
            char rightChar = s.charAt(right);
            int rightCharIndex = window.getOrDefault(rightChar, 0);
            if (rightCharIndex > left)
                left = Math.max(left, rightCharIndex);
            maxLen = Math.max(maxLen, right - left + 1);
            window.put(rightChar, right + 1);
            right++;
        }
        return maxLen;
    }
