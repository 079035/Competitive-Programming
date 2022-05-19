#include <iostream>

using namespace std;

int main() {
	int t, n, a, b = 0;

	cin >> t;

	while (t--) {
		cin >> n;

		int mem = n;

		while (n != 0) {
			a = n % 10;
			b = 10 * b + a;
			n = n / 10;
		}

		if (mem == b) cout << "wins" << endl;
		else cout << "losses" << endl;

		b = 0;
	}

	return 0;
}