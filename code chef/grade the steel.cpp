#include <iostream>

using namespace std;

int main() {
	int t,grade;
	float hardness, carbon, tensile;
	bool c1, c2, c3;
	cin >> t;
	while (t--) {
		cin >> hardness >> carbon >> tensile;

		if (hardness > 50)c1 = true;
		else c1 = false;
		if (carbon < 0.7)c2 = true;
		else c2 = false;
		if (tensile > 5600)c3 = true;
		else c3 = false;

		if (c1 == true && c2 == true && c3 == true) {
			grade = 10;
		}
		else if (c1 == true && c2 == true && c3 == false) {
			grade = 9;
		}
		else if (c1 == false && c2 == true && c3 == true) {
			grade = 8;
		}
		else if (c1 == true && c2 == false && c3 == true) {
			grade = 7;
		}
		else if (c1 == true || c2 == true || c3 == true) {
			grade = 6;
		}
		else if (c1 == false && c2 == false && c3 == false) {
			grade = 5;
		}

		cout << grade << endl;
	}
	return 0;
}