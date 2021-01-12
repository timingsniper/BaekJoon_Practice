#include <iostream> 
#include <cstring> 
#include <cstdlib> 
#include <cstdio> 
using namespace std;

int main() {
	int n, a, b;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		cout << a + b << endl;
	}
}