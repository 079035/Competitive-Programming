#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#define pb push_back

using namespace std;
typedef long long ll;

struct d
{
    int mon;
    int day;
};
int main()
{
    int n, ans = 0;
    cin >> n;
    d *arr = new d[n];
    string fn, ln;
    for (int i = 0; i < n; i++)
    {
        string s, m, date;
        cin >> s >> m >> date;
        //day to string
        vector<char> v;
        for (int i = 0; i < date.length(); i++)
        {
            if (date[i] > 48 && date[i] < 58)
                v.pb(date[i]);
        }
        if (v.size() == 1)
            arr[i].day = v[0] - 48;
        else
            arr[i].day = (v[0] - 48) * 10 + v[1] - 48;
        if (i == 0)
            fn = s;
        else if (i == n - 1)
            ln = s;
        if (m == "January")
            arr[i].mon = 1;
        else if (m == "February")
            arr[i].mon = 2;
        else if (m == "March")
            arr[i].mon = 3;
        else if (m == "April")
            arr[i].mon = 4;
        else if (m == "May")
            arr[i].mon = 5;
        else if (m == "June")
            arr[i].mon = 6;
        else if (m == "July")
            arr[i].mon = 7;
        else if (m == "August")
            arr[i].mon = 8;
        else if (m == "September")
            arr[i].mon = 9;
        else if (m == "October")
            arr[i].mon = 10;
        else if (m == "November")
            arr[i].mon = 11;
        else if (m == "December")
            arr[i].mon = 12;
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i].mon < arr[i - 1].mon)
            ans++;
        else if (arr[i].mon == arr[i - 1].mon)
        {
            if (arr[i].day < arr[i - 1].day)
                ans++;
        }
    }
    if (ans == 1)
        cout << fn << " is " << ans << " year older than " << ln << "." << endl;
    else if (ans == 0)
        cout << "No difference." << endl;
    else
        cout << fn << " is " << ans << " years older than " << ln << "." << endl;
    return 0;
}