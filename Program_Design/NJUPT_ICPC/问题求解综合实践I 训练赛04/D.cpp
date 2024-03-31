#include<iostream>
#include<vector>

using namespace std;

vector<int> add(vector<int> A, vector<int> B)
{
	vector<int> temp;
	int r = 0;
	for(int i = 0; i < A.size() || i < B.size(); i++)
	{
		if(i < A.size()) r += A[i];
		if(i < B.size()) r += B[i];
		temp.push_back(r % 10);
		r /= 10;
	}
	if(r) temp.push_back(1);
	while(temp.size() > 1 && temp.back() == 0) temp.pop_back();
	return temp;
}


int main()
{
	string a, b;
	cin >> a >> b;
	vector<int> A, B;
	for(int i = a.length() - 1; i >= 0; i--) A.push_back(a[i] - '0');
	for(int i = b.length() - 1; i >= 0; i--) B.push_back(b[i] - '0');
	
	vector<int> c = add(A, B);
	
	for(int i = c.size() - 1; i >= 0; i--)
	{
		cout << c[i];
	}
	return 0;
}
