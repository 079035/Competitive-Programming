#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char arr[100];
    scanf("%s", arr);
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == ',')
            cout << " ";
        else
            cout << arr[i];
    }
    return 0;
}