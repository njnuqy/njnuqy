Public static List<List<Integer>> leetCode46dfs(int[] nums)
{
  int len = nums.length;
  if(len == 0)
    return res;
  List<List<Integer>> res = new ArrayList<>();
  boolean[] used = new boolean[len];
  Deque<Integer> path = new ArrayDeque<>();
  dfs(nums,len,0,path,used,res);
  return res;
}

public static void dfs(int[] nums,int len,int depth,Deque<Integer> path,boolean[] used,List<List<Integer>> res)
{
  if(depth == len)
  {
    res.add(new ArrayList<>(path));
    return;
  }
  for(int i=0;i<len;i++)
  {
    if(used[i])
      continue;
    path.addLast(nums[i]);
    used[i] = true;
    dfs(nums,len,depth+1,path,used,res);
    path.removeLast();
    used[i] = false;
  }
}
