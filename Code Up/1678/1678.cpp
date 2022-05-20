#include <iostream>
using namespace std;

int arr[5][5];

int mine(int x, int y)
{
    int cnt = 0;
    for (int i = x; i < x + 3; i++)
    {
        for (int j = y; j < y + 3; j++)
        {
            cnt += arr[i][j];
        }
    }
    return cnt;
}

int main()
{
    int m = 0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mine(i, j) > m)
                m = mine(i, j);
        }
    }
    cout << m << endl;
    return 0;
}