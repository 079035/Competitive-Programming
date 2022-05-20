#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#define pb push_back

using namespace std;
typedef long long ll;

int main()
{
    string s;
    vector<char> v;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0' || s[i] == '1' || s[i] == '2')
            v.pb(s[i]);
        else if (s[i] == 'A')
            v.pop_back();
        else if (s[i] == 'B')
        {
            v.pop_back();
            v.pop_back();
        }
        else
            v.clear();
    }
    for (auto itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr;
    }
    cout << endl;
    return 0;
}