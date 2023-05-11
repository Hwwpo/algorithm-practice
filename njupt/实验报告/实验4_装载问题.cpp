#include<bits/stdc++.h>

using namespace std;

int n;
int x[10], bestx[10];
int c1, c2;
int w[10];
int cw, bestw, r;

void Show()
{
	cout << "第一艘船装载的集装箱为：";
	for(int i = 1; i <= n; i++)
		if(bestx[i] == 1) cout << i << " ";
	puts("");
	cout << "第二艘船装载的集装箱为：";
	for(int i = 1; i <= n; i++)
		if(bestx[i] == 0) cout << i << " ";
	puts("");
	puts("");
}

void Backtrack()
{
	int i = 1;
	while(true)
	{
		while(i <= n && cw + w[i] <= c1)
		{
			x[i] = 1;
			r -= w[i];
			cw += w[i];
			i++;
		}
		if(i > n){
			if(bestw < cw)
			{
				bestw = cw;
				for(int j = 1; j <= n; j++) bestx[j] = x[j];
			}
			
		}
		else{
			r -= w[i];
			x[i] = 0;
			i++;
		}
		while(cw + r <= bestw){
			i--;
			while(i > 0 && x[i] == 0)
			{
				r += w[i];
				i--;
			}
			if(i == 0)
			{
				Show();
				return;
			}
			x[i] = 0;
			cw -= w[i];
			i++;
		}
	}
}


int main()
{
	n = 5;
	c1 = 60;
	c2 = 40;
	cout << "请输入集装箱的重量："; 
	for(int i = 1; i <= n; i++)
	{
		cin >> w[i];
		r += w[i];
	}
	Backtrack();
	return 0;
}
