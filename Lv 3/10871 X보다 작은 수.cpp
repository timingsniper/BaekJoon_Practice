#include <iostream> 
#include <cstring> 
#include <cstdlib> 
#include <cstdio> 
using namespace std;

int main() {
	//속도up
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int n, x, element;
	char spacing;
	cin >> n >> x;

	for (int i = 0; i < n; i++) {
		cin >> element;
		if (element < x) {
			cout << element << " ";
		}
	}
}