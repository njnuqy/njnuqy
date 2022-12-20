#include<iostream>
#include<algorithm>

using namespace std;

const int N = 1010;

int g[N];
int p[N],v[N];
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
    cin >> v[i] >> p[i];
    
    for(int i = 1 ; i <= n ;i++)
    {
        for(int j = m ; j >= v[i] ;j--)
        {
            g[j] = max(g[j] ,g[j-v[i]] + p[i]);
        }
    }
    cout << g[m];
    return 0;
}
