#include <iostream>

using namespace std;

int main() {
	int t,a;
	cin >> t;
	while (t--) {
		int count = 0;
		cin >> a;
		while (a >= 100) {
			a -= 100;
			count++;
		}
		while (a >= 50) {
			a -= 50;
			count++;
		}
		while (a >= 10) {
			a -= 10;
			count++;
		}
		while (a >= 5) {
			a -= 5;
			count++;
		}
		while (a >= 2) {
			a -= 2;
			count++;
		}
		while (a >= 1) {
			a -= 1;
			count++;
		}
		cout << count << endl;
	}
	return 0;
}