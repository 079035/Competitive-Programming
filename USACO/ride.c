/*
ID: jordidc1
LANG: C
PROG: ride
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	FILE *fp1, *fp2;
	char comet[8];
	char group[8];
	int i, ioc = 1, iog = 1;

	fp1 = fopen("ride.in", "r");
	fp2 = fopen("ride.out", "w");

	fscanf(fp1, "%s", comet);
	fscanf(fp1, "%s", group);

	int lc = strlen(comet);
	int lg = strlen(group);

	for (i = 0; i<lc; i++) {
		comet[i] -= 64;
	}
	for (i = 0; i<lc; i++) {
		ioc *= comet[i];
	}
	for (i = 0; i<lg; i++) {
		group[i] -= 64;
	}
	for (i = 0; i<lg; i++) {
		iog *= group[i];
	}

	if (ioc % 47 == iog % 47) {
		fputs("GO\n",fp2);
	}
	else {
		fputs("STAY\n",fp2);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;
}
