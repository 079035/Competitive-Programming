#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string *arr = new string[n * 2];
    for (int i = 0; i < n * 2; i += 2)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n * 2; i += 2)
    {
        if (i == n * 2 - 1)
            continue;
        arr[i] = "AMOLED";
    }
    for (int i = 0; i < n * 2; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}