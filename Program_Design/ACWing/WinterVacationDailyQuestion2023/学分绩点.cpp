#include<iostream>

using namespace std;

const int N = 15;

int n, sum_cre;
double GPA;
int credit[N];

double get(int t, int i)
{
	double jd;
	if(t >= 90 && t <= 100) jd = 4;
	else if(t >= 85 && t <= 89) jd = 3.7;
	else if(t >= 82 && t <= 84) jd = 3.3;
	else if(t >= 78 && t <= 81) jd = 3.0;
	else if(t >= 75 && t <= 77) jd = 2.7;
	else if(t >= 72 && t <= 74) jd = 2.3;
	else if(t >= 68 && t <= 71) jd = 2.0;
	else if(t >= 64 && t <= 67) jd = 1.5;
	else if(t >= 60 && t <= 63) jd = 1.0;
	else jd = 0;
	
	//cout << jd << ' ';
	return jd * credit[i];
}

int main()
{
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> credit[i];
		sum_cre += credit[i];
	}
	
	for(int i = 1; i <= n; i++)
	{
		int t; cin >> t;
		GPA += get(t, i);
		//cout << GPA << endl;
	}
	GPA /= sum_cre;
	
	printf("%.2lf", GPA);
	return 0;
	
	
}
