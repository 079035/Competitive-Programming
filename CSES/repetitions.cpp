#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main() {
	string dna;
	cin >> dna;
	int max = 0, len = 0;
	char current;
	for (int i = 0; i < dna.length();) {
		current = dna[i];
		len = 0;
		for (; i < dna.length() && current == dna[i]; i++) {
			len++;
		}
		if (len > max)
			max = len;
	}
	cout << max << endl;

	return 0;
}