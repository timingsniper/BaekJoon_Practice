#include <iostream> 
#include <cstring> 
#include <cstdlib> 
#include <cstdio> 
using namespace std;

int main() {
	//속도up
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n, a, b;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}


}