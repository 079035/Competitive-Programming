#include <iostream>

using namespace std;

int main() {
	int t, n, a;
	cin >> t;
	while (t--) {
		int count = 0;
		cin >> n;
		for (int i = 2; i <= n / 2; i++) {
			if (n%i == 0) count++;
		}
		if(count==0) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}