#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#define pb push_back

using namespace std;
typedef long long ll;

int main()
{
    int c, v0, v1, a, l;
    cin >> c >> v0 >> v1 >> a >> l;
    int cur = 0;
    int day = 0;
    while (cur < c)
    {
        int page = v0 + a * day;
        if (page > v1)
            page = v1;
        cur += page;
        if (day > 0)
            cur -= l;
        day++;
    }
    cout << day << endl;
    return 0;
}