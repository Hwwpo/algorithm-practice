#include<bits/stdc++.h>

using namespace std;

typedef pair<float, int> PII;

vector<PII> a;
int n, m;
// �����㷨 
bool cmp(PII &a, PII &b){
	return a.second / a.first > b.second / b.first;
}
void GreedyKnapsack(float *x)
{
	float u = m;					// ������ʣ��������u ��ʼ��Ϊm
	int i = 0;
	for(i = 0; i < n; i++) x[i] = 0;//�Խ�����x ��ʼ��
	for(i = 0; i < n; i++)			//���������ȱ�׼ѡ������xi
	{
		if(a[i].first > u) break;	//����ǰ��Ʒi ���޷�ȫ��װ�£�������
		x[i] = 1.0;					//��������װ�뵱ǰ��Ʒi
		u = u - a[i].first;			//ͬʱ����ʣ�����ؼ�w[i]
	}
	if(i < n) x[i] = u / a[i].first;//����ʣ��ռ�ֻ�����µ�ǰ��Ʒi ��x[i]����
}

int main()
{
	cout << "��������Ʒ����������";
	cin >> n;
	cout << "�����뱳�������أ�";
	cin >> m;
	for(int i = 0; i < n; i++)
	{
		float w;
		int p;
		cout << "������� " << i + 1 <<" ����Ʒ�������ͼ�ֵ��";
		cin >> w >> p;
		a.push_back(make_pair(w, p));
	}
	sort(a.begin(), a.end(), cmp); // w[i]��p[i]/w[i]�ķ�����������
	for(int i = 0; i < n; i++)
	{
		cout << a[i].first << '-' << a[i].second << endl;
	}
	float x[10];
	GreedyKnapsack(x);
	cout << "�õ���x����Ϊ��"; 
	for(int i = 0; i < n; i++ )
		cout << x[i] << ' ';
	cout << endl;
	float sum = 0;
	for(int i = 0; i < n; i++ ){
		sum += x[i] * a[i].second;
	}
	cout << "������Ϊ��" << sum; 
	return 0;
}
