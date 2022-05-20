/*
ID: jordidc1
PROG: milk3
LANG: C++
*/
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
typedef long long ll;
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define sq(a) (a) * (a)
#define max2(a, b, c) max(max(a, b), c)
#define min2(a, b, c) min(min(a, b), c)
#define mod (ll)(1e9 + 7)
#define endl '\n'
#define palindrome(s) s == string(s.rbegin(), s.rend())
set<int> output;
int vis[23][23];
int cap_a, cap_b, cap_c;
int total;
void pm(int a,int b,int cb,int *ta,int *tb) //pour_milk
{
    while(a&&b<cb){
        a--;
        b++;
    }
    *ta = a;
    *tb = b;
}
void dp(int b, int c)
{
    if(vis[b][c])
        return;
    vis[b][c] = true;
    int a = total - b - c;
    int t_a = a, t_b = b, t_c = c; //tmps
    if(!a)
        output.insert(c);
    pm(c, a, cap_a, &t_c, &t_a);
    dp(b, t_c);
    pm(c, b, cap_b, &t_c, &t_b);
    dp(t_b, t_c);
    pm(a, b, cap_b, &t_a, &t_b);
    dp(t_b, c);
    pm(a, c, cap_c, &t_a, &t_c);
    dp(b, t_c);
    pm(b, c, cap_c, &t_b, &t_c);
    dp(t_b, t_c);
    pm(b, a, cap_a, &t_b, &t_a);
    dp(t_b, c);
}
int main()
{
    ifstream fin("milk3.in");
    ofstream fout("milk3.out");
    fin >> cap_a >> cap_b >> cap_c;
    //cout << cap_a << endl;
    total = cap_c;
    dp(0, cap_c);
    bool space = false;
    for (auto itr = output.begin(); itr != output.end();itr++){
        if(space)
            fout << " ";
        space = true;
        fout<<*itr;
    }
    fout << endl;
    fout.close();
    exit(0);
}