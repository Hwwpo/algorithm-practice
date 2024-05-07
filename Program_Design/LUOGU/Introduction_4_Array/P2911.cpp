// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
using namespace std;
#define N (90)
int s1, s2, s3;
int mp[N];
int main(int argc, char *argv[]) {
	cin >> s1 >> s2 >> s3;
	for(int i = 1; i <= s1; i++)
		for(int j = 1; j <= s2; j++)
			for(int k = 1; k <= s3; k++)
				mp[i + k + j]++;
	int cmpf = 0;
	for(int i = 3; i <= s1 + s2 + s3; i++){
		if(mp[i] > cmpf)
			cmpf = mp[i];
	}
	for(int i = 3; i <= s1 + s2 + s3; i++){
		if(mp[i] == cmpf){
			cout << i;
			return 0;
		}
	}
}