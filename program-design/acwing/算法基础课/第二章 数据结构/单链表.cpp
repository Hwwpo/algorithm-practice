// 数组模拟链表内容：
// e[i] = x 表示节点i的值为x
// ne[i] = s 表示节点i的下一个节点为节点s
// idx表示当前节点空间使用到哪里了
// head表示链表头，指向第一个节点，初始为-1

#include <iostream>

using namespace std;

const int N = 1e6 + 10;

int m;
int e[N], ne[N], idx, head;

// 链表初始化
void init()
{
	head = -1;
	idx = 0;
}

// 在表头添加节点
void add_to_head(int x)
{
	e[idx] = x;
	ne[idx] = head;
	head = idx++;
}
// 删除节点k后的一个节点
void remove(int k)
{
	ne[k] = ne[ne[k]];
}
// 在节点k后插入一个节点
void insert(int k, int x)
{
	e[idx] = x;
	ne[idx] = ne[k];
	ne[k] = idx++;
}

int main()
{
	init();
	cin >> m;
	while (m--) {
		int k, x;
		char op;
		
		cin >> op;
		if(op == 'H')
		{
			cin >> x;
			add_to_head(x);
		}
		else if(op == 'D')
		{
			cin >> k;
			if(!k) head = ne[head];
			else remove(k - 1);
		}
		else {
			cin >> k >> x;
			insert(k - 1, x);
		}
	}
	for(int i = head; i != -1; i = ne[i]) cout << e[i] << ' ';
	return 0;
}