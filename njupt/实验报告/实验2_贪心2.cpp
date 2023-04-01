#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> PII;
typedef pair<int, PII> PIII;

int n;
vector<PIII> a;
int x[100];
int p[100];
bool cmp(PIII a, PIII b){
	return a.second.second > b.second.second;
}

int find(int x)
{
	if(p[x] != x) p[x] = find(p[x]);
	return p[x];
}

int FJS()
{
	int b, k = -1, *f = new int[n + 1];
	for(int i = 0; i <= n + 10; i++){
		f[i] = i;
		p[i] = i;
	}
	for(int i = 0; i < n; i++){
		if(n < a[i].second.first) b = n; else b = a[i].second.first;
		int r = find(b);
		if(f[r]){
			x[++k] = i;
			int t = find(f[r] - 1);
			p[find(r)] = find(t);
			f[r] = f[t]; 
		}
	}
	return k;
}


int main()
{
	cout << "��������ҵ������:";
	cin >> n;
	for(int i = 0; i < n; i++){
		int d, p;
		cout << "��������ҵ " << i << " �Ľ�ֹ�����Լ���ɽ�����"; 
		cin >> d >> p;
		a.push_back(make_pair( i, make_pair(d, p) ));
	}
	sort(a.begin(), a.end(), cmp);
	int k = FJS();
	int sum = 0;
	cout << "ѡ�����ҵ���Ϊ��";
	for(int i = 0; i <= k; i++)
	{
		cout << a[x[i]].first << ' ';
		sum += a[x[i]].second.second;
	}
	cout << endl << "�������Ϊ:" << sum;
	return 0; 
	
}
int JS()
{
	//��p0��p1 ��... ��pn-1
	int k = 0;//(x[0],...,x[k])�ǵ�ǰ����ѡ����ҵ����
	x[0] = 0;
	for(int j = 1; j < n; j++){
		int r = k;//����r �����λ��k ��ǰѰ�Ҳ���λ��
		while(r >= 0 && a[x[r]].second.first > a[j].second.first && a[x[r]].second.first > r + 1) r--;
		if((r < 0 || a[x[r]].second.first <= a[j].second.first) && a[j].second.first > r + 1)
		{
			for(int i = k; i >= r + 1; i--) x[i + 1] = x[i];
			x[r + 1]=j;//��ҵj ����r+1 λ�ô�
			k++;
		}
	}
	return k;
}



