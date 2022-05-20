#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())
typedef vector<int> VI;
typedef pair<int, int> pii;
typedef long long ll;
typedef double db;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int isdivisible7(string num)
{
    int n = num.length(), gSum=0;
    if (n == 0)
        return 1;

    // Append required 0s at the beginning.
    if (n % 3 == 1)
    {
        num+="00";
        n += 2;
    }
    else if (n % 3 == 2)
    {
        num+="0";
        n++;
    }

    // add digits in group of three in gSum
    int i, GSum = 0, p = 1;
    for (i = n - 1; i >= 0; i--)
    {

        // group saves 3-digit group
        int group = 0;
        group += num[i--] - '0';
        group += (num[i--] - '0') * 10;
        group += (num[i] - '0') * 100;

        gSum = gSum + group * p;

        // generate alternate series of plus
        // and minus
        p *= (-1);
    }

    return (gSum % 7 == 0);
}

ll isDivisibleBy7(ll num)
{
    // If number is negative, make it positive
    if (num < 0)
        return isDivisibleBy7(-1*num);

    // Base cases
    if (num == 0 || num == 7)
        return 1;
    if (num < 10)
        return 0;

    // Recur for ( num / 10 - 2 * num % 10 )
    return isDivisibleBy7(num / 10 - 2 *
                                         (num - num / 10 * 10));
}

int main()
{
    ll t;
    string s;
    cin>>t;
    getline(cin, s);
    while(t--)
    {
        getline(cin,s);
        stringstream ss(s);
        string num;
        ss >> num;
        if(isdivisible7(num)==0)
            cout << "DANGER!" << endl;
        else{
            cout << s << endl;
        }
    }
    return 0;
}