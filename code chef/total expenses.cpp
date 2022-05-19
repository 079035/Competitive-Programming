#include <iostream>

using namespace std;

int main() {
	double t, q,p,price;
	cin >> t;
	while (t--) {
		cin >> q >> p;
		if (q > 1000)price = q * p*0.9;
		else price = q * p;
		printf("%f\n", price);
	}
	return 0;
}