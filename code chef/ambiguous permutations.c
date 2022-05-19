#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//ANG

int main() {
	int a;
	int i;
	long long int test[100001];
	long long int real[100001];
	 
	while (1) {
		scanf("%lld", &a);

		if (a == 0) return 0;
		else {
			for (i = 1; i <= a; i++) {
				scanf("%lld", &test[i]);
			}

			for (i = 1; i <= a; i++) {
				real[test[i]] = i;
			}

			for (i = 1; i <= a; i++) {
				if (test[i] != real[i]) {
					printf("not ambiguous\n");
					break;
				}
			}
			if (i == a + 1) {
				printf("ambiguous\n");
			}
		}
	}
}