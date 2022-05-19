#include <iostream>

using namespace std;

int main() {
	int t,a;
	char arr[1000];
	cin >> t;
	while (t--) {
		cin >> a;
		cin >> arr;
		for (int i = 0; i < a; i++) {
			if (arr[i] == 'Y') {
				cout << "NOT INDIAN" << endl;
				break;
			}
			else if (arr[i] == 'I') {
				cout << "INDIAN" << endl;
				break;
			}
			if (i == a - 1) cout << "NOT SURE" << endl;
		}
	}
	return 0;
}