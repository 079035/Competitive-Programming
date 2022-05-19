#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, Q, l = 0;
	string s;
	cin >> N >> Q;
	for (int i = 0; i < N; i++) {
		s += (char)('A' + i);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			l++;
			printf("? %c %c\n", s[j], s[j + 1]);
			fflush(stdout);
			char ans;
			cin >> ans;
			if (ans == '>')swap(s[j], s[j + 1]);
			if (l == Q)break;
		}
		if (l == Q)break;
	}
	printf("! %s\n", s.c_str());
	fflush(stdout);

	return 0;
}