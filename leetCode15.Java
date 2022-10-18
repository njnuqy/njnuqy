 //三数之和为两数之和基础上的改进
public List<List<Integer>> leetCode15(int[] nums)
    {
        Arrays.sort(nums);
        List<List<Integer>> ans = new ArrayList<List<Integer>>();
        int len = nums.length;
        for(int first=0 ; first<len ; ++first)
        {
            if(first > 0 && nums[first] == nums[first - 1])
            {
                continue;
            }
            int third = len-1;
            int target = -nums[first];
            for(int second = first+1 ; second<len;++second)
            {
                if(second>first+1 && nums[second] == nums[second-1])
                {
                    continue;
                }
                while(second < third && nums[second] + nums[third] > target)
                {
                    --third;
                }
                if(second == third)
                {
                    break;
                }
                if (nums[second] + nums[third] == target)
                {
                    List<Integer> list = new ArrayList<Integer>();
                    list.add(nums[first]);
                    list.add(nums[second]);
                    list.add(nums[third]);
                    ans.add(list);
                }
            }
        }
        return ans;
    }
