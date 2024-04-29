#include <iostream>
#include <vector>
using namespace std;
typedef struct student {
	int y;
	int s;
	int e;
	int total;
	student(int y, int s, int e): y(y), s(s), e(e){
		total = y + s + e;
	}
}stu;

bool cmp(stu a, stu b){
	if(abs(a.y - b.y) <= 5 && abs(a.s - b.s) <= 5 && abs(a.e - b.e) <= 5 && abs(a.total - b.total) <= 10)
		return true;
	return false;
}
int main(int argc, char *argv[]) {
	vector<stu> a;
	int n;
	cin >> n;
	while(n--){
		int y, s, e;
		cin >> y >> s >> e;
		stu temp(y, s, e);
		a.push_back(temp);
	}
	int res = 0;
	for(int i = 0; i < a.size(); i++)
		for(int j = i + 1; j < a.size(); j++)
			if(cmp(a[i], a[j]))
				res++;
	cout << res;
	return 0;
}