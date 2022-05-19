#include <iostream>

using namespace std;

int main() {
	int t;
	float salary;
	cin >> t;
	while (t--) {
		cin >> salary;
		if (salary < 1500)salary = salary + 0.1*salary + 0.9*salary;
		else salary = salary + 500 + 0.98*salary;
		printf("%.2f\n", salary);
	}
	return 0;
}