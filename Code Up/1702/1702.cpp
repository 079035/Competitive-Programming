#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (b % 2)
        cout << a << b << c << endl;
    else
        cout << a << b << c << " " << a << b << c << endl;
    return 0;
}