//经典的动态规划  很棒的思想！

public static int leetCode121(int[] prices)
    {
        int maxprofit = 0,minprice = -1;
        for (int price : prices) {
            minprice = Math.min(minprice,price);
            maxprofit = Math.max(maxprofit,price-minprice);
        }
        return maxprofit;
    }
    public static List<String> leetCode784(String s)
    {
        List<String> res = new ArrayList<String>();
        dfs784(s.toCharArray(),0,res);
        return res;
    }
