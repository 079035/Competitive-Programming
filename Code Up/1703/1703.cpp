#include <iostream>
using namespace std;

int main()
{
    int n, h, m, s;
    cin >> n;
    h = n / 3600;
    n -= 3600 * h;
    m = n / 60;
    n -= 60 * m;
    s = n;
    cout << h << " " << m << " " << s << endl;
    return 0;
}