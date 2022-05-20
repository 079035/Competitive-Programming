#include <iostream>
using namespace std;

#define M 9
#define N 9

int arr[M][N] = {0}, ans = 0, cnt = 0;

void floodFillUtil(int x, int y, int val)
{
    if (x < 1 || x >= 8 || y < 1 || y >= 8)
        return;
    if (arr[x][y] != val)
        return;
    cnt++;
    arr[x][y] = 0;
    floodFillUtil(x + 1, y, val);
    floodFillUtil(x - 1, y, val);
    floodFillUtil(x, y + 1, val);
    floodFillUtil(x, y - 1, val);
}

void floodFill(int x, int y, int val)
{
    floodFillUtil(x, y, val);
}

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            if (arr[i][j] == 0)
                continue;
            cnt = 0;
            floodFill(i, j, arr[i][j]);
            if (cnt >= 3)
                ans++;
        }
    }

    cout << ans << endl;

    return 0;
}