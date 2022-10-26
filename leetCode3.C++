class Solution 
{
public:
    string countAndSay(int n) 
    {
        string prev = "1";
        for(int i = 2 ; i <=n;i++)
        {
            string curr = "";
            int start = 0;
            int pos = 0;
            while(pos < prev.size())
            {
                while(pos < prev.size() && prev[start] == prev[pos])
                {
                pos++;
                }
             curr += to_string(pos-start) + prev[start];
                start = pos;
            }
             prev = curr;
        }
         return prev;
    }
};
