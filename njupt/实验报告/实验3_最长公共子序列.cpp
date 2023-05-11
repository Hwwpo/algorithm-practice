#include<bits/stdc++.h>
#define maxlength 11

using namespace std;

class LCS
{
	public:
		LCS(int nx, int ny, string x, string y)
		{
			m = nx;
			n = ny;
			a = new char[m + 2];
			b = new char[n + 2];
			memset(a, 0, m + 2);
			memset(b, 0, n + 2);
			for(int i = 0; i < nx; i++) a[i + 1] = x[i];
			for(int i = 0; i < ny; i++) b[i + 1] = y[i];
			c = new int[maxlength][maxlength];
			s = new int[maxlength][maxlength];
			for(int i = 0; i < maxlength; i++)
				for(int j = 0; j < maxlength; j++)
					c[i][j] = s[i][j] = 0;
		}
		int LCSLength();
		void CLCS()
		{
			CLCS(m, n, "");
		}
	private:
	void CLCS(int i, int j, string res);
	int (*c)[maxlength], (*s)[maxlength];
	int m, n;
	char *a, *b;
 };
 
 int LCS::LCSLength()
 {
 	for(int i = 0; i <= m; i++) c[i][0] = 0;
 	for(int j = 0; j <= n; j++) c[0][j] = 0;
 	for(int i = 1; i <= m; i++)
 		for(int j = 1; j <= n; j++)
 		{
 			if(a[i] == b[j])
 			{
 				c[i][j] = c[i - 1][j - 1] + 1;
 				s[i][j] = 1;
			 }
			 else
			 {
			 	if(c[i - 1][j] >= c[i][j - 1])
			 	{
			 		c[i][j] = c[i - 1][j];
			 		s[i][j] = 2;
				 }
				 else
				 {
				 	c[i][j] = c[i][j - 1];
				 	s[i][j] = 3;
				 }
			 }
		 }
	return c[m][n];
 }
 
 void LCS::CLCS(int i, int j, string res)
 {
 	if(i==0 || j == 0)
 	{
 		cout << res << endl;
 		return;
	 }
 	if(a[i] == b[j])
 	{
 		string base = res;
 		res = a[i] + res;
 		CLCS(i-1, j-1, res);
 		res = base;
	 }
	 else
	 {
	 	if(c[i-1][j] > c[i][j - 1]) CLCS(i - 1, j, res);
	 	else if(c[i-1][j] == c[i][j - 1])
	 	{
	 		CLCS(i - 1, j, res);
	 		CLCS(i, j - 1, res);
		 }
	 	else CLCS(i, j - 1, res);
	 }
 }
 
 int main()
 {
 	int nx, ny;
 	string x, y;
 	cout << "请输入两个字符串：";
 	cin >> x >> y;
 	LCS lcs(x.length(), y.length(), x, y);
 	cout << "最长公共子序列长度为:"; 
 	cout << lcs.LCSLength() << endl;
 	cout << "最长公共子序列为:";
 	lcs.CLCS();
 	return 0;
 }
