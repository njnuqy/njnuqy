public static String leetCode14(String[] str)
    {
        if(str.length==0 || str==null)
            return "";
        int count = str.length;
        String prefix = str[0];
        for (int i=1;i<count;i++)
        {
            prefix = leetCode14search(prefix,str[i]);
            if(prefix.length()==0)
                break;
        }
        return prefix;
    }
    public static String leetCode14search(String str1,String str2)
    {
        int length = Math.min(str1.length(),str2.length());
        int index = 0;
        while(index < length && str1.charAt(index) == str2.charAt(index))
            index++;
        return str1.substring(0,index);
    }
