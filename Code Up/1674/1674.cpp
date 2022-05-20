#include <iostream>
using namespace std;

int main()
{
    int arr[10], sum = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%1d", &arr[i]);
        sum += arr[i];
    }
    if (sum % 7 == 4)
        cout << "Bad" << endl;
    else
        cout << "Good" << endl;

    return 0;
}