#include <iostream>

using namespace std;

int main() {
	int t, length;
	cin >> t;
	while (t--) {
		int answer = 0;
		cin >> length;
		while (length > 2) {
			answer += (length - 2) / 2;
			length = length - 2;
		}
		cout << answer << endl;
	}
	return 0;
}