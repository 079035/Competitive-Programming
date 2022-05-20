#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0, tmp;
    cin >> n;
    tmp = n;
    if (n >= 100)
    {
        if ((n / 100) % 3 == 0)
            cnt++;
        n -= (n / 100) * 100;
        if (n >= 10 && (n / 10) % 3 == 0)
            cnt++;
        n -= (n / 10) * 10;
        if (n > 0 && n % 3 == 0)
            cnt++;
    }
    else if (n >= 10)
    {
        if ((n / 10) % 3 == 0)
            cnt++;
        n -= (n / 10) * 10;
        if (n > 0 && n % 3 == 0)
            cnt++;
    }
    else
    {
        if (n % 3 == 0)
            cnt++;
    }
    if (cnt == 3)
        cout << "KKK" << endl;
    else if (cnt == 2)
        cout << "KK" << endl;
    else if (cnt == 1)
        cout << "K" << endl;
    else
        cout << tmp << endl;

    return 0;
}