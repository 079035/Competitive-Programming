#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <string.h>
#include <sstream>
#include <iomanip>
using namespace std;
typedef long long ll;
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define SS                   \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define palindrome(s) s == string(s.rbegin(), s.rend())

int main()
{
    SS;
    int N;
    double avg = 0;
    cin >> N;
    vector<string> subs, grades;

    string sub, grade;
    double num, numG = 0;
    int r = 0;
    while (N--)
    {
        cin >> sub >> grade >> num;
        numG += num;
        double py;
        if (grade == "A+")
            py = 4.3;
        else if (grade == "A0")
            py = 4.0;
        else if (grade == "A-")
            py = 3.7;
        else if (grade == "B+")
            py = 3.3;
        else if (grade == "B0")
            py = 3.0;
        else if (grade == "B-")
            py = 2.7;
        else if (grade == "C+")
        {
            py = 2.3;
            r++;
            subs.pb(sub);
            grades.pb(grade);
        }
        else if (grade == "C0")
        {
            py = 2.0;
            r++;
            subs.pb(sub);
            grades.pb(grade);
        }
        else if (grade == "C-")
        {
            py = 1.7;
            r++;
            subs.pb(sub);
            grades.pb(grade);
        }
        else if (grade == "D+")
        {
            py = 1.3;
            r++;
            subs.pb(sub);
            grades.pb(grade);
        }
        else if (grade == "D0")
        {
            py = 1.0;
            r++;
            subs.pb(sub);
            grades.pb(grade);
        }
        else if (grade == "D-")
        {
            py = 0.7;
            r++;
            subs.pb(sub);
            grades.pb(grade);
        }
        else if (grade == "F")
        {
            py = 0.0;
            r++;
            subs.pb(sub);
            grades.pb(grade);
        }
        else if (grade == "Pass")
            py = 4.3;
        else
        {
            py = 0.0;
            r++;
            subs.pb(sub);
            grades.pb(grade);
        }
        avg += py * num;
    }
    avg /= numG;
    string final;
    if (avg >= 4.3)
    {
        final = "A+";
    }
    else if (avg >= 4.0)
    {
        final = "A0";
    }
    else if (avg >= 3.7)
    {
        final = "A0";
    }
    else if (avg >= 3.3)
    {
        final = "B+";
    }
    else if (avg >= 3.0)
    {
        final = "B0";
    }
    else if (avg >= 2.7)
    {
        final = "B-";
    }
    else if (avg >= 2.3)
    {
        final = "C+";
    }
    else if (avg >= 2.0)
    {
        final = "C0";
    }
    else if (avg >= 1.7)
    {
        final = "C-";
    }
    else if (avg >= 1.3)
    {
        final = "D+";
    }
    else if (avg >= 1.0)
    {
        final = "D0";
    }
    else if (avg >= 0.7)
    {
        final = "D-";
    }
    else if (avg >= 0.0)
    {
        final = "F";
    }
    cout << "Average : " << fixed << setprecision(2) << avg << " (" << final << ")" << endl
         << endl;
    cout << "RETAKE NEEDED (" << r << ")" << endl;
    for (int i = 0; i < subs.size(); i++)
    {
        cout << ' ' << subs[i] << " (" << grades[i] << ")" << endl;
    }

    return 0;
}