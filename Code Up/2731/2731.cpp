#include <iostream>
#include <algorithm>
#include <string>
#define rep(i, a, b) for (int i = a; i <= b; i++)
using namespace std;

void lcs(string s1, string s2, int m, int n)
{
    int L[1001][1001] = {0};
    rep(i, 0, m)
    {
        rep(j, 0, n)
        {
            if (i == 0 || j == 0)
            {
                L[i][j] = 0;
            }
            else if (s1[i - 1] == s2[j - 1])
            {
                L[i][j] = L[i - 1][j - 1] + 1;
            }
            else
            {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }
    }
    cout << L[m][n] << endl;
    int idx = L[m][n];
    char s[1001];
    s[idx] = '\0';
    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (s1[i - 1] == s2[j - 1])
        {
            s[idx - 1] = s1[i - 1];
            i--;
            j--;
            idx--;
        }
        else if (L[i - 1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }
    cout << s << endl;
    return;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int m = s1.length();
    int n = s2.length();
    lcs(s1, s2, m, n);
    return 0;
}