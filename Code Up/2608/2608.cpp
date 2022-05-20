#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#define pb push_back

using namespace std;
typedef long long ll;

int n;
char ans[7];

void dfs(int now)
{
    if (now == n)
    {
        printf("%s\n", ans);
        return;
    }
    ans[now] = 'O';
    dfs(now + 1);
    ans[now] = 'X';
    dfs(now + 1);
}

int main()
{
    cin >> n;
    dfs(0);
    return 0;
}