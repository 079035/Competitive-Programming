#include <iostream>

using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		int tmp = 0;
		for (int i = 2; i <= k; i++) {
			if (n%i > tmp) {
				tmp = n % i;
			}
		}
		cout << tmp << endl;
	}
	return 0;
}