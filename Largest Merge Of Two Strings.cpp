#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	string a, b,merge;
	cin >> a >> b;
	int i = 0, j = 0;
	while (i < a.size() || j < b.size())
	{
		if (i < a.size() && a.substr(i) > b.substr(j))
			merge += a[i++];
		else
			merge += b[j++];
	}
	cout << merge;
	return 0;
}
