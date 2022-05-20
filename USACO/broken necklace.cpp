/*
ID: jordidc1
TASK: beads
LANG: C++
*/
#include <fstream>
#include <string>

using namespace std;

int main() {
	ofstream fout("beads.out");
	ifstream fin("beads.in");
	int n;
	string s;
	fin >> n;
	fin >> s;
	int cur = 0, max = 0;
	char color;
	bool switched;

	//startttttttttttttttt
	for (int i = 0; i < n; i++) {
		cur = 0;
		switched = false;
		color = 'w';
		for (int j = 0; j < n; j++) {
			const char cur_c = s[(i + j) % n];
			if (cur_c != 'w') {
				if (color == 'w') {
					color = cur_c;
				}
				else if (color != cur_c) {
					if (switched)break;
					else {
						color = cur_c;
						switched = true;
					}
				}
			}
			cur++;
		}
		if (cur > max)max = cur;
	}

	fout << max << endl;

	return 0;
}