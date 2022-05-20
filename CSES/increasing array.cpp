#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	long long int n, cnt = 0;
	cin >> n;
	long long int *arr = new long long int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i < n; i++) {
		while (arr[i] < arr[i - 1]) {
			arr[i]++;
			cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}