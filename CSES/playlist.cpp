#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	int j = 0, i = 0, m = 1;
	unordered_set<int> s;
	while (j < N) {
		if (s.count(a[j])) {
			m = max(m, j - i);
			while (a[j] != a[i]) {
				s.erase(a[i++]);
			}
			i++;
		} else s.insert(a[j]);
		j++;
	} 
	m = max(m, j - i);
	cout << m << endl;
}