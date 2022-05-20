#include <iostream>
#include <algorithm>
using namespace std;

bool pos(int a, int b, int c)
{
    int arr[3] = {a, b, c};
    sort(arr, arr + 3);
    if (arr[0] + arr[1] > arr[2])
        return true;
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n / 2; i++)
    {
        for (int j = 1; j < n - i; j++)
        {
            if (j < i)
                continue;
            if (j > n - i - j)
                continue;
            if (pos(i, j, n - i - j))
                cout << i << " " << j << " " << n - i - j << endl;
        }
    }
    return 0;
}