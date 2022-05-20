#include <iostream>
using namespace std;

int main() {
	long long int i, n;
	cin >> n;
	for (i = 1; i <= n; i++) {
		cout << i * i*(i*i - 1) / 2 - (i - 2)*(i - 1) * 8 / 2 << endl;
	}
	return 0;
}