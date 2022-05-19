#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t, n, i, j, arr[100][100],a,b;
	scanf("%d", &t); // test case
	while (t--) {
		scanf("%d", &n); // number of rows
		for (i = 0; i < n; i++) {
			for (j = 0; j < i + 1; j++) {
				scanf("%d", &arr[i][j]);
			}
		}
		for (i = n - 1; i >= 1; i--) {
			for (j = i; j >= 1; j--) {
				a = arr[i][j] + arr[i - 1][j - 1];
				b = arr[i][j - 1] + arr[i - 1][j - 1];
				if (a < b) arr[i - 1][j - 1] = b;
				else arr[i - 1][j - 1] = a;
			}
		}
		printf("%d\n", arr[0][0]);
	}

	return 0;
}