#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<deque>
#include<set>
#include<map>
#include<sstream>
using namespace std;

int main()
{
	// 所有的数据结构都支持size() 和 empty()	


	vector<int> a; //基本定义方式
	vector<int> b(10); //定义b有十个空间
	vector<int> c(10, 3); //定义c有十个空间 且十个空间的值都为3
	for (int i = 0; i < 10; i++)
		a.push_back(i);
	//三种输出方式
	for (int i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
	for (auto i = a.begin(); i != a.end(); i++)
		cout << *i << " ";
	cout << endl;
	for (auto x : a)
		cout << x << " ";

	pair<int, int> p; //pair支持多种类型
	//两种构造方法
	p = make_pair(1, 2);
	p = { 1,2 };
	// 如何取值
	int x = p.first;
	int y = p.second;

	string s = "wphnr";
	// string 可以用加号来链接字符串
	s += "jstpl";
	// 长用方法substr  他有两个参数 第一个参数表示开始的地址 第二个参数表示往后面几个字符 
	s.substr(1, 2);
	// 也可以不用第二个参数 自动输出从第一个参数开始 到结尾结束


	queue<int> q;
	q.push(1); // 向队尾插入元素
	q.pop(); //弹出队头
	q.front(); //返回队头
	q.back(); //返回队尾
		//由于queue没有claer 于是可以这样清空
	q = queue<int>();

	priority_queue<int> prior;//默然大跟堆
	priority_queue<int, vector<int>, greater<int>> heap; //这样就是小根堆了
	prior.push(1); // 向堆插入元素
	prior.pop(); //弹出堆头
	prior.top();//返回堆头

	stack<int> st;
	st.push(1); // 向栈顶插入元素
	st.pop(); //弹出栈顶
	st.top();//返回栈顶

	deque<int> de; // 加强版vector
	de.clear(); //清空
	de.front();//返回队头
	de.back();//返回队尾
	de.pop_back(); //队头弹出
	de.pop_front(); //队尾弹出
	de.push_back(1); //队尾插入
	de.push_front(1); //队头插入
	//同样支持begin end迭代器

	set<int> S;//不能有重复元素 不然会被忽略
	multiset<int> SS; //可以有重复元素
	S.insert(1); //O(log(n))
	S.find(1); //查找 没找到返回end
	S.count(1); //查到某个数的个数
	S.erase(1); //输入一个数 则删除所有的这个数  输入一个迭代器 删除这个迭代器
	S.lower_bound(1);//返回大于等于1的最小的数的迭代器
	S.upper_bound(1);//返回大于1的最小的数的迭代器
	//不符合则返回end()	
	map<string, int> map;
	map["wpdtg"] = 1; //同样支持lower_bound 和 upper_bound



		istringstream str(" this is a   text");
		string out;
		while (str >> out) {
			cout << out << endl;
		}
	return 0;
}
