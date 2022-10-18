//关于栈
//isEmpty 栈是否为空
// push 放入栈
// pop 栈顶 并且移除 
//stack 为头插法
public static boolean leetCode20(String s) {
        if (s.isEmpty())
            return true;
        Stack<Character> stack = new Stack<>();
        for (char c : s.toCharArray()) {
            if (c == '(')
                stack.push(')');
            else if (c == '[')
                stack.push(']');
            else if (c == '{')
                stack.push('}');
            else {
                if (stack.isEmpty())
                    return false;
                if (c == stack.peek())
                    stack.pop();
                else return false;
            }
        }
        if (stack.isEmpty())
            return true;
        return false;
    }
