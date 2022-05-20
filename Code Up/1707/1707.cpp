#include <iostream>
using namespace std;

int main()
{
    int arr[10], c1 = 0, c2 = 0;
    float m, s = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        s += arr[i];
    }
    m = (float)(s / 10);
    printf("%.1f\n", m);
    for (int i = 0; i < 10; i++)
        if (arr[i] >= m)
            c1++;
        else
            c2++;
    cout << c1 << " " << c2 << endl;

    return 0;
}