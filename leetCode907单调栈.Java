public static int[] leetCode907单调栈(int[] nums1,int[] nums2)
    {
        Map<Integer,Integer> map = new HashMap<Integer,Integer>();
        Deque<Integer> stack = new ArrayDeque<Integer>();
        for(int i = nums2.length-1; i>=0 ; i--) {
            int num = nums2[i];
            while (!stack.isEmpty() && num > stack.peek())
                stack.pop();
            map.put(num, stack.isEmpty()? -1 : stack.peek());
            stack.push(num);
        }
        int[] res = new int[nums1.length];
        for(int i= 0 ;  i  < nums1.length ; i++)
        {
            res[i] = map.get(nums1[i]);
        }
        return res;
    }
