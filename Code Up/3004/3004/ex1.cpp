3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>

using namespace std;

typedef struct da {
	int x, num;
	int order;
};

int cmp(const da &p, const da &q) {
	return p.x < q.x;
}
int cmp2(const da &p, const da &q) {
	return p.num < q.num;
}

int main() {
	da a[50010];
	int N;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		scanf("%d", &a[i].x);
		a[i].num = i;
	}
	sort(a + 1, a + N + 1, cmp);
	for (int i = 1; i <= N; i++) {
		a[i].order = i - 1;
	}
	sort(a + 1, a + N + 1, cmp2);
	for (int i = 1; i <= N; i++) {
		printf("%d ", a[i].order);
	}
	return 0;
}