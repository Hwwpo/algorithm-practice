#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> PII;
char c;

int w11, l11;
int w21, l21;

vector<PII> s11, s21;

void check()
{
	if((w11 >= 11 || l11 >= 11) && abs(w11 - l11) >= 2){
		s11.push_back(make_pair(w11, l11));
		w11 = 0;
		l11 = 0;
	}
	if((w21 >= 21 || l21 >= 21) && abs(w21 - l21) >= 2){
		s21.push_back(make_pair(w21, l21));
		w21 = 0;
		l21 = 0;
	}
}

int main()
{
	scanf("%c", &c);
	while(c != 'E')
	{
		if(c == 'W'){
			w11++;
			w21++;
		}
		else if(c == 'L'){
			l11++;
			l21++;
		}
		check();
		scanf("%c", &c);
	}
	s11.push_back(make_pair(w11, l11));
	s21.push_back(make_pair(w21, l21));
	for(auto i:s11){
		cout << i.first << ':' << i.second << endl;
	}
	puts("");
	for(auto i:s21){
		cout << i.first << ':' << i.second << endl;
	}
}
