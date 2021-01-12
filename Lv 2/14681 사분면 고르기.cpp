#include <iostream> 
#include <cstring> 
#include <cstdlib> 
#include <cstdio> 
using namespace std;

int main() {
	int x, y;
	char b;
	cin >> x;
	cin >> y;

	if (x > 0) {
		if (y > 0) {
			cout << "1";
			return 0;
		}
		else {
			cout << "4";
			return 0;
		}

	}
	else {
		if (y > 0) {
			cout << "2";
			return 0;
		}
		else {
			cout << "3";
			return 0;
		}
	}
	
}