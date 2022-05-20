#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int *f(int decimal, int n) {
	int *binary = new int[n];

	for (int i = 0; i<n; i++) {
		binary[i] = decimal % 2;
		decimal /= 2;
	}

	for (int i = 0; i < n/2; i++)
	{
		int tmp = binary[n - 1 - i];
		binary[n - 1 - i] = binary[i];
		binary[i] = tmp;
	}

	for (int i = 0; i<n; i++) {
		cout << binary[i] << " ";
	}
	cout << endl;

	return binary;
}

bool link(int *arr, int n) {
	for (int i = 0; i<n - 1; i++) {
		if (arr[i] == 0 && arr[i + 1] == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n, ans = 0;
	cin >> n;
	int i;
	for (i = 0; i<pow(2, n); i++) {
		int *arr = f(i, n);
		if (link(arr, n)) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}