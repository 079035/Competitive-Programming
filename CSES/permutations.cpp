#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n == 1) {
		cout << 1 << endl;
	}
	else if (n == 2 || n == 3) {
		cout << "NO SOLUTION" << endl;
	}
	else {
		int wut = n - 1;
		while (wut >= 1) {
			cout << wut << " ";
			wut -= 2;
		}
		wut = n;
		while (wut >= 1) {
			cout << wut << " ";
			wut -= 2;
		}
	}

	return 0;
}