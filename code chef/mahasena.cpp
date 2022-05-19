#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int e_count = 0, o_count = 0;

	while (n--) {
		int a;
		cin >> a;
		if (a % 2 == 0) e_count++;
		else if (a % 2 == 1) o_count++;
	}

	if (e_count > o_count) cout << "READY FOR BATTLE" << endl;
	else cout << "NOT READY"<<endl;

	return 0;
}