 public static int leetCode1700(int[] students,int[] food)
    {
        int s1 = Arrays.stream(students).sum();
        int s0 = students.length-s1;
        for(int i = 0;i<food.length;i++)
        {
            if(food[i] == 1 && s1>0)
                s1--;
            else if(food[i] == 0 && s0>0)
                s0--;
            else
                break;
        }
        return s0+s1;
    }
