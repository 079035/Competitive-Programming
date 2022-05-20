/*
ID: jordidc1
TASK: friday
LANG: C++
*/
#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream fout("friday.out");
	ifstream fin("friday.in");
	int N;
	bool leap;
	fin >> N;

	int calendarDay = 0;
	int freq[7] = {0, 0, 0, 0, 0, 0, 0};
	int normDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int leapDays[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	
	for (int year = 1900; year < 1900 + N; year++) {
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)leap = true;
		else leap = false;
		for (int month = 0; month < 12; month++) {
			int weekday = (calendarDay + 12) % 7;
			freq[(weekday + 2) % 7]++;
			calendarDay += leap ? leapDays[month] : normDays[month];
		}
	}

	for (int i = 0; i < 7; i++) {
		fout << freq[i];
		if (i == 6)fout << endl;
		else fout << " ";
	}

	return 0;
}