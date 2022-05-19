#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int t, n, temp;
	scanf("%d", &t);
	while (t) {
		scanf("%d", &n);
		temp = 0;
		while (n) {
			temp += n % 10;
			n = n / 10;
			temp = temp * 10;
		}
		printf("%d\n",temp / 10);
		t--;
	}
	return 0;
}