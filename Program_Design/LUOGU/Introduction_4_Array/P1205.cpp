// -*- coding: utf-8 -*-
// @AUTHOR: ppy
#include <iostream>
#include <cstring>
using namespace std;
#define N 20
int n;
char a[N][N];
char backup[N][N];
char dest[N][N];


void t90(){
	char turned[N][N];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			turned[j][n - 1 - i] = a[i][j];
		}
	}
	memcpy(a, turned, sizeof(char)*N*N);
}
void t180(){
	t90();
	t90();
}
void t270(){
	t90();
	t90();
	t90();
}

void relect(){
	char turned[N][N];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			turned[i][n - 1 - j] = a[i][j];
		}
	}
	memcpy(a, turned, sizeof(char)*N*N);
}
void disp_res(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			cout << a[i][j];
		puts("");
	}
}

bool judge(){
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(a[i][j] != dest[i][j])
				return false;
	
	return true;
}

int main(int argc, char *argv[]) {
	cin >> n;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> a[i][j];
	memcpy(backup, a, sizeof(char)*N*N);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			cin >> dest[i][j];
	// 从初始恢复 a
	memcpy(a, backup, sizeof(char)*N*N);
	// 90
	t90();
	if(judge()){
		cout << '1';
		return 0;
	}
	// 180
	t90();
	if(judge()){
		cout << '2';
		return 0;
	}
	// 270
	t90();
	if(judge()){
		cout << '3';
		return 0;
	}
	// 从初始恢复 a
	memcpy(a, backup, sizeof(char)*N*N);
	relect();
	if(judge()){
		cout << '4';
		return 0;
	}
	t90();
	if(judge()){
		cout << '5';
		return 0;
	}
	// 180
	t90();
	if(judge()){
		cout << '5';
		return 0;
	}
	// 270
	t90();
	if(judge()){
		cout << '5';
		return 0;
	}
	
	// 从初始恢复 a
	memcpy(a, backup, sizeof(char)*N*N);
	if(judge()){
		cout << '6';
		return 0;
	}
	cout << '7';
	return 0;
}