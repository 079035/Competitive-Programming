#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int *arr = new int[n-1];
	for (int i = 0; i < n-1; i++) {
		scanf("%d", &arr[i]);
	}
	sort(arr, arr + n - 1);
	for (int i = 0; i < n - 1; i++) {
		if (arr[i] != i + 1) {
			cout << i + 1 << endl;
			return 0;
		}
	}
	return 0;
}