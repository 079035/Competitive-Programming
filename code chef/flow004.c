#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int tmp = n;
		while (tmp / 10 != 0) {
			tmp = tmp / 10;
		}
		printf("%d\n", tmp+n%10);
	}
	return 0;
}