#include <iostream> 
#include <cstring> 
#include <cstdlib> 
#include <cstdio> 
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;

	//consider when min - 45 < 0
	//ex) 10분 - 45분 = 10+60-45 = 25
	//also consider when h = 0, back to 23

	if (m - 45 >= 0) { 
		//45분을 빼도 전시간으로 안넘어가도 되는 케이스
		cout << h << " " << m - 45;
		return 0;
	}
	else {
		int newMin;
		newMin = m + 60 - 45;
		if (h == 0) {
			cout << "23" << " " << newMin;
			return 0;
		}
		else {
			cout << h - 1 << " " << newMin;
			return 0;
		}
	}

	
}