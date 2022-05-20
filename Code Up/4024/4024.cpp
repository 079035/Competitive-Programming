#include <iostream>

using namespace std;

int W, H;
int arr[100][100] = {0};
int px[8] = {-1, 0, 1, -1, 1, -1, 0, 1}, py[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

void dfs(int x, int y)
{
    arr[x][y] = 0;
    for (int p = 0; p < 8; p++)
    {
        if (x + px[p] < 0 || x + px[p] >= H || y + py[p] < 0 || y + py[p] >= W)
            continue;
        else if (arr[x + px[p]][y + py[p]] == 1)
            dfs(x + px[p], y + py[p]);
    }
    return;
}

int main()
{
    char c;
    int ans = 0;
    cin >> W >> H;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> c;
            if (c == 'L')
                arr[i][j] = 1;
        }
    }
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (arr[i][j] == 1)
            {
                dfs(i, j);
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}