#include<bits/stdc++.h>
#define MAXNUM 10
using namespace std;


int m[MAXNUM][MAXNUM] = {0x3f3f3f3f};
int s[MAXNUM][MAXNUM];

void MatrixChain(int n, int *p) {
	for(int i = 1; i <= n; i++) m[i][i] = 0;
	for(int r = 2; r <= n; r++) {
		for(int i = 1; i <= n - r + 1; i++) {
			int j = i + r - 1;
			m[i][j] = m[i + 1][j] + p[i] * p[i + 1] * p[j + 1];
			s[i][j] = i;
			for(int k = i + 1; k < j; k++) {
				int t = m[i][k] + m[k + 1][j] + p[i]*p[k + 1]*p[j+1];
				if(t < m[i][j]) {
					m[i][j] = t;
					s[i][j] = k;
				}
			}
			cout<<"最终求出：m["<<i<<"]["<<j<<"]的值为："<<m[i][j]<<endl;
		}
	}
	return;
}

void Traceback(int i, int j) {
	if(i == j) {
		cout << 'A' << i << ' ';
		return;
	}
	if(i < s[i][j]) cout << '(';
	Traceback(i, s[i][j]);
	if (i<s[i][j]) cout << ')';
	if (s[i][j]+1<j) cout << '(';
	Traceback(s[i][j]+1,j);
	if (s[i][j]+1<j) cout << ')';
}

int LookupChain(int i,int j,int *p,int **m,int **s) {
	if (m[i][j]>0) return m[i][j];
	if (i==j) return 0;
	m[i][j] = LookupChain(i+1,j,p,m,s) + p[i]*p[i+1]*p[j+1];
	s[i][j]=i;
	for (int k=i+1; k<j; k++) {
		int v=LookupChain(i,k,p,m,s)+LookupChain(k+1,j,p,m,s)+p[i]*p[k+1]*p[j+1];
		if (v< m[i][j]) {
			cout<<"更新m["<<i<<"]["<<j<<"]的值为："<<v<<endl;
			m[i][j]=v;
			cout<<"更新s["<<i<<"]["<<j<<"]的值为："<<k<<endl;
			s[i][j]=k;
		}
	}
	cout<<"最终求出：m["<<i<<"]["<<j<<"]的值为："<<m[i][j]<<endl;
	return m[i][j]
}
int main() {
	int n;
	cout << "请输入矩阵的个数:";
	cin >> n;
	int *p = new int[2*MAXNUM + 10];
	for(int i = 1; i <= n + 1; i++) {
		cout << "请输入矩阵的维数：";
		cin >> p[i];
	}
	// memset(m, 0x3f, sizeof m);
	MatrixChain(n, p);
	cout << "最小计算次数为:" << m[1][n] << endl;
	cout << "计算次序为：";
	Traceback(1, n);
	return 0;
}
