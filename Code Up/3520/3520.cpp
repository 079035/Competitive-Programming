#include <iostream>
#include <vector>
#define rep(i, a, b) for (int i = a; i <= b; i++)
typedef long long ll;
using namespace std;

int n, ans = 0, col[20], inc[30], de[20];
int cnt = 1;
void solve(int r, vector<int> v)
{
    if (r > n)
    {
        ans++;
        if (cnt > 3)
            return;

        for (auto itr = v.begin(); itr != v.end(); itr++)
        {
            cout << *itr << ' ';
        }
        cout << endl;
        cnt++;
        return;
    }
    for (int i = 1; i <= n; i++)
        if (!col[i] && !inc[r + i] && !de[n + (r - i) + 1])
        {
            col[i] = inc[r + i] = de[n + (r - i) + 1] = 1;
            int now = v.size();
            v.push_back(i);
            solve(r + 1, v);
            v.erase(v.begin() + now, v.end());

            col[i] = inc[r + i] = de[n + (r - i) + 1] = 0;
        }
}

int main()
{
    cin >> n;
    vector<int> v;
    solve(1, v);
    cout << ans << endl;

    return 0;
}