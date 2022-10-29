#include<iostream>

using namespace std;

const int N = 100010;
int head, e[N], ne[N], idx;
//head表示头结点的下标
//e[N]用来存储数值
//ne[N]用来存储下标
//idx用来存储当前是第几个数字
void init()
{
    head = -1;
    idx = 0;
}

void addToHead(int x)
{
    e[idx] = x;
    ne[idx] = head;
    head = idx;
    idx++;
}

void add(int k, int x)
{
    e[idx] = x;
    ne[idx] = k;
    ne[k] = idx;
    idx++;
}

void de(int k)
{
    ne[k] = ne[ne[k]];
}
//插入的时候用k-1是因为下标从0开始 所以要记得减去1
int main()
{
    int m;
    cin >> m;
    init();
    while (m--)
    {
        char op;
        int x, k;
        cin >> op;
        if (op == 'H')
        {
            cin >> x;
            addToHead(x);
        }
        else if (op == 'I')
        {
            cin >> k >> x;
            add(k - 1, x);
        }
        else
        {
            cin >> k;
            if (!k) head = ne[head];
            de(k - 1);
        }
    }
    for (int i = head; i != -1; i = ne[i]) cout << e[i] << " ";
    cout << endl;
    return 0;
}
