#include<iostream>

using namespace std;

const int N = 1e5 + 10;

int n;
int h[N], ph[N], hp[N], Size = 0;

void heap_swap(int a, int b)
{
	swap(hp[a], hp[b]);
	swap(ph[hp[a]], ph[hp[b]]);
	swap(h[a], h[b]);
}

void down(int n)
{
	int t = n;
	if(2 * n <= Size && h[2 * n] < h[n]) t = 2 * n;
	if(2 * n + 1 <= Size && h[2 * n + 1] < h[t]) t = 2 * n + 1;
	if(t != n)
	{
		heap_swap(t, n);
		down(t);
	}
}

void up(int n)
{
	while(n / 2)
	{
		if(h[n / 2] > h[n])
		n /= 2;
	}
}


int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n;
	while(n--)
	{
		string op;
		int k, x, m = 1;
		cin >> op;
		if(op == "I")
		{
			cin >> x;
			Size++;
			hp[Size] = m++;
			ph[hp[Size]] = Size;
			h[Size] = x;
			up(Size);
		}
		else if(op == "PM")
		{
			cout << h[1] << endl;;
		}
		else if(op == "DM")
		{
			heap_swap(1, Size);
			Size--;
			down(1);
		}
		else if(op == "D")
		{
			cin >> k;
			k = ph[k];
			heap_swap(1, k);
			Size--;
			down(k), up(k);
		 }
		 else if(op == "C")
		 {
		 	cin >> k >> x;
		 	k = ph[k];
		 	h[k] = x;
		 	down(k), up(k);
		 }
	}
	return 0;
}
