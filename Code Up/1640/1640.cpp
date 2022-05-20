#include <iostream>
#include <string>
using namespace std;

string arr[100];

bool findS(int a)
{
    for (int i = 0; i <= arr[a].length() - 3; i++)
    {
        if (arr[a][i] == 't' && arr[a][i + 1] == 'a' && arr[a][i + 2] == 'p')
            return true;
    }
    if (arr[a].length() < 6)
        return false;
    for (int i = 0; i <= arr[a].length() - 6; i++)
    {
        if (arr[a][i] == 'x' && arr[a][i + 1] == 'o' && arr[a][i + 2] == 'c' && arr[a][i + 3] == 'u' && arr[a][i + 4] == 'r' && arr[a][i + 5] == 'e')
            return true;
    }
    return false;
}

int main()
{
    int n, cnt = 0;

    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, arr[i]);
    }
    /*
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    */
    for (int i = 0; i < n; i++)
    {
        if (arr[i].length() <= 3)
        {
            cout << arr[i] << endl;
            cnt++;
            continue;
        }
        if (findS(i))
        {
            cout << arr[i] << endl;
            cnt++;
        }
    }
    if (cnt <= 3)
    {
        cout << "safe" << endl;
        return 0;
    }
    else if (cnt <= 6)
    {
        cout << "warning" << endl;
        return 0;
    }
    else
        cout << "danger" << endl;
    return 0;
}