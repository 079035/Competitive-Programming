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
typedef pair<int, int> PII;
typedef long long ll;
typedef double db;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    indexed_set;
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
//head
int main(void){
    vector<string> arr = {"977392277598422", "591019474348328", "986196259", "20116488438", "60208574457", "855099650", "7462799575", "32699778416", "62198", "56350284687597285", "80919", "630199500528", "724051", "1929077807937696", "7462", "434357040499", "6110127025", "068523057459462", "8575480250623461", "53985263421116", "9394504", "5691", "812741823023", "10", "91332305257", "132", "0952937071", "26149455557", "50758471", "87315765436177801", "75779250127860", "64983369012138384", "605107065537"};
    sort(arr.begin(), arr.end());
    for (auto itr = arr.begin(); itr != arr.end();itr++)
    {
        for (auto i = arr.begin(); i != itr;i++)
        {
            if((*itr).find(*i)==0){
                cout << *itr << endl
                     << *i << endl;
            }
        }
    }
    rep(i, 0, arr.size() - 1)
    {
        if(arr[i].length()==17)
            cout << arr[i] << endl;
    }
}