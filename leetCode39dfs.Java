 public static List<List<Integer>> leetCode39dfs(int[] candidates,int target)
    {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> path = new ArrayList<>();
        dfs39(candidates,target,ans,path,0)
        return ans;
    }
    public static void dfs39(int[] candidates,int target,List<List<Integer>> ans,List<Integer> path,int depth)
    {
        if( depth == candidates.length )
            return;
        if( target == 0)
        {
            ans.add(new ArrayList<Integer>(path));
            return;
        }
        dfs39(candidates,target,ans,path,depth+1);
        if( target - candidates[depth] > 0)
        {
            path.add(candidates[depth]);
            dfs39(candidates,target-candidates[depth],ans,path,0);
            path.remove(path.size()-1);
        }
    }
