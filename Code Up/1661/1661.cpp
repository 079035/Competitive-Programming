#include <iostream>
#include <string>
using namespace std;

int main()
{
    string arr;
    getline(cin, arr);
    for (int i = 0; i < arr.length(); i++)
    {
        if (arr[i] == ' ')
            continue;
        else if (arr[i] == ',')
            cout << " ";
        else if (arr[i] == ';')
            cout << " " << endl;
        else
            cout << arr[i];
    }
    return 0;
}