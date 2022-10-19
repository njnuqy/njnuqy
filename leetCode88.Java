 public static void leetCode88方法2(int[] nums1, int m, int[] nums2, int n) {
        int p1 = 0;
        int p2 = 0;
        int[] sort = new int[m + n];
        int temp;
        while (p1 < m || p2 < n) {
            if (p1 == m)
                temp = nums2[p2++];
            else if (p2 == n)
                temp = nums1[p1++];
            else if (nums1[p1] > nums2[p2])
                temp = nums1[p1++];
            else
                temp = nums2[p2++];
            sort[p1 + p1 - 1] = temp;
        }
        for (int i = 0; i < m + n; i++)
            //答案即是nums1[]
            nums1[i] = sort[i];
    }
