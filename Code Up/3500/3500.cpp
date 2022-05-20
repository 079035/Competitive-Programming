#include <iostream>
#include <string.h>

using namespace std;

int arr[10][10], mine[10][10];
void detectMine(int x, int y)
{
    int cnt = 0;
    if (x - 1 >= 1 && arr[x - 1][y] == 1)
        cnt++;
    if (x + 1 <= 9 && arr[x + 1][y] == 1)
        cnt++;
    if (y - 1 >= 1 && arr[x][y - 1] == 1)
        cnt++;
    if (y + 1 <= 9 && arr[x][y + 1] == 1)
        cnt++;
    if (x + 1 <= 9 && y + 1 <= 9 && arr[x + 1][y + 1] == 1)
        cnt++;
    if (x + 1 <= 9 && y - 1 <= 9 && arr[x + 1][y - 1] == 1)
        cnt++;
    if (x - 1 <= 9 && y - 1 <= 9 && arr[x - 1][y - 1] == 1)
        cnt++;
    if (x - 1 <= 9 && y + 1 <= 9 && arr[x - 1][y + 1] == 1)
        cnt++;
    if (cnt > 0)
        mine[x][y] = cnt;
    return;
}
void floodFill(int x, int y, int prevV, int newV)
{
    if (x < 1 || x > 9 || y < 1 || y > 9)
        return;
    if (mine[x][y] != prevV)
    {
        return;
    }
    mine[x][y] = newV;
    floodFill(x + 1, y, prevV, newV);
    floodFill(x - 1, y, prevV, newV);
    floodFill(x, y + 1, prevV, newV);
    floodFill(x, y - 1, prevV, newV);
}
bool intercept(int x, int y)
{
    if (x - 1 >= 1 && mine[x - 1][y] == 0)
        return true;
    if (x + 1 <= 9 && mine[x + 1][y] == 0)
        return true;
    if (y - 1 >= 1 && mine[x][y - 1] == 0)
        return true;
    if (y + 1 <= 9 && mine[x][y + 1] == 0)
        return true;
    if (x + 1 <= 9 && y + 1 <= 9 && mine[x + 1][y + 1] == 0)
        return true;
    if (x + 1 <= 9 && y - 1 <= 9 && mine[x + 1][y - 1] == 0)
        return true;
    if (x - 1 <= 9 && y - 1 <= 9 && mine[x - 1][y - 1] == 0)
        return true;
    if (x - 1 <= 9 && y + 1 <= 9 && mine[x - 1][y + 1] == 0)
        return true;
    else
        return false;
}

bool intercept_w_mine(int x, int y)
{
    if (x - 1 >= 1 && arr[x - 1][y] == 1)
        return true;
    if (x + 1 <= 9 && arr[x + 1][y] == 1)
        return true;
    if (y - 1 >= 1 && arr[x][y - 1] == 1)
        return true;
    if (y + 1 <= 9 && arr[x][y + 1] == 1)
        return true;
    if (x + 1 <= 9 && y + 1 <= 9 && arr[x + 1][y + 1] == 1)
        return true;
    if (x + 1 <= 9 && y - 1 <= 9 && arr[x + 1][y - 1] == 1)
        return true;
    if (x - 1 <= 9 && y - 1 <= 9 && arr[x - 1][y - 1] == 1)
        return true;
    if (x - 1 <= 9 && y + 1 <= 9 && arr[x - 1][y + 1] == 1)
        return true;
    else
        return false;
}

int main()
{
    int r, c, remove[201][2], idx = 0;

    memset(mine, -1, sizeof(mine));

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                remove[idx][0] = i;
                remove[idx++][1] = j;
            }
        }
    }

    cin >> r >> c;

    if (arr[r][c] == 1)
    {
        for (int i = 1; i < 10; i++)
        {
            for (int j = 1; j < 10; j++)
            {
                if (i == r && j == c)
                    cout << -1 << " ";
                else
                    cout << '_' << " ";
            }
            cout << endl;
        }
        return 0;
    }
    if (intercept_w_mine(r, c))
    {
        for (int i = 1; i < 10; i++)
        {
            for (int j = 1; j < 10; j++)
            {
                if (i == r && j == c)
                {
                    detectMine(i, j);
                    cout << mine[i][j] << " ";
                }
                else
                    cout << '_' << " ";
            }
            cout << endl;
        }
        return 0;
    }

    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            detectMine(i, j);
        }
    }
    for (int i = 1; i < idx; i++)
    {
        mine[remove[i][0]][remove[i][1]] = -1;
    }

    floodFill(r, c, -1, 0);

    // Print
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (mine[i][j] == 0)
                cout << 0 << " ";
            else if (intercept(i, j))
                cout << mine[i][j] << " ";
            else
                cout << '_' << " ";
        }
        cout << endl;
    }
    return 0;
}