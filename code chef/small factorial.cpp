#include <iostream>

using namespace std;

int main() {
	int t, n, i;

	cin >> t;

	while (t--) {
		cin >> n;
		int res = 1;
		for (i = 1; i <= n; i++) {
			res = res * i;
		}
		cout << res << endl;
	}

	return 0;
}