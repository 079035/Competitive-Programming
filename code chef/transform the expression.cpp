#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	char a[401], b[401], k;

	cin >> t;

	while (t--) {
		k = 0;

		cin >> a;

		for (int i = 0; i < strlen(a); i++) {
			if (a[i] < 97 || a[i]>122) {
				b[k] = a[i];
				if (b[k] == ')') {
					k--;
					while (b[k] != '(') {
						cout << b[k];
						k--;
					}
					k--;
				}
				k++;
			}
			else cout << a[i];
		}
		cout << endl;
	}

	return 0;
}