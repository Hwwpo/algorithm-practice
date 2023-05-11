#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int x[8], ans[20][8], y[8];
int cnt = 0;
bool Place(int k, int i, int *x)
{
	for(int j = 0; j < k; j++)
		if((x[j] == i)||(abs(x[j] - i) == abs(j - k))) return false;
	return true;
}

// ����Ƿ���� 
bool Check(int k, int n)
{
	for(int i = 0; i < n; i++)
	{
		if(y[i] != ans[k][i]) return false;
	}
	return true;
}

bool Construct(int n)
{
	// ��ת 90
	for(int i = 0; i < n; i++)
	{
		y[x[i]] = n - 1 -i;
	 }
	for(int k = 0; k < cnt; k++)
	{
		if(Check(k, n)) return false;
	}
	
	// ��ת 180
	for(int i = 0; i < n; i++)
	{
		y[n - 1 - i] = n - 1 - x[i];
	 }
	for(int k = 0; k < cnt; k++)
	{
		if(Check(k, n)) return false;
	}
	
	// ��ת 270
	for(int i = 0; i < n; i++)
	{
		y[n - 1 - x[i]] = i;
	 }
	for(int k = 0; k < cnt; k++)
	{
		if(Check(k, n)) return false;
	}
	
	// ˮƽ��ת
	for(int i = 0; i < n; i++)
	{
		y[i] = n - 1 - x[i];
	 } 
	for(int k = 0; k < cnt; k++)
	{
		if(Check(k, n)) return false;
	}
	
	// ��ֱ��ת
	for(int i = 0; i < n; i++)
	{
		y[n - 1 - i] = x[i];
	 } 
	for(int k = 0; k < cnt; k++)
	{
		if(Check(k, n)) return false;
	}
	
	// �Խ��߷�ת
	for(int i = 0; i < n; i++)
	{
		y[x[i]] = i;
	 }
	for(int k = 0; k < cnt; k++)
	{
		if(Check(k, n)) return false;
	}
	
	// ���Խ��߷�ת
	for(int i = 0; i < n; i++)
	{
		y[n - 1 - x[i]] = n - 1 - i;
	 }
	for(int k = 0; k < cnt; k++)
	{
		if(Check(k, n)) return false;
	}
	return true;
}

// ������� 
//void NQueens(int k, int n, int *x)
//{
//	for(int i = 0; i < n; i++)
//	{
//		if(Place(k, i, x))
//		{
//			x[k] = i;
//			if( k == n - 1)
//			{
//				if(Construct(n))
//				{
//					for(int i = 0; i < n; i++) ans[cnt][i] = x[i];
//					cnt++;
//				}
//			}
//			else
//			{
//				NQueens(k + 1, n, x);
//			}
//		}
//	}
//}


// ��һ���� 
bool NQueens(int k, int n, int *x)
{
	for(int i = 0; i < n; i++)
	{
		if(Place(k, i, x))
		{
			x[k] = i;
			if( k == n - 1)
			{
				for(int i = 0; i < n; i++) cout << x[i] << " ";
				puts("");
				return true;
			}
			else
			{
				if(NQueens(k + 1, n, x)) return true;
			}
		}
	}
	return false;
}

void NQueens(int n, int *k)
{
	NQueens(0, n, k);
}

void print_ans()
{
	for(int r = 0; r < cnt; r++)
	{
		for(int i = 0; i < 8; i++)
		{
			cout << ans[r][i] << " ";
		}
		puts("");
	}
 } 

int main()
{
	for(int i = 0; i < 8; i++) x[i] = -1;
	NQueens(8, x);
	print_ans();
	return 0;
}
