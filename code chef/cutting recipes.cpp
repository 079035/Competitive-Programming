#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int i, j, gcf = 1, min = 999, cnt, num, numArr[100];
		cin >> num;
		for (i = 0; i < num; i++) {
			cin >> numArr[i];
		}
		for (i = 0; i < num; i++) {
			if (numArr[i] < min) min = numArr[i];
		}
		for (i = 2; i <= min; i++) {
			cnt = 0;
			for (j = 0; j < num; j++) {
				if (numArr[j] % i == 0) cnt++;
				if (cnt == num) gcf = i;
			}
		}
		for (i = 0; i < num; i++) {
			numArr[i] /= gcf;
		}
		for (i = 0; i < num; i++) {
			cout << numArr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}