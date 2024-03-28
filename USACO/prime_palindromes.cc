/*
ID: jordidc1
PROG: pprime
LANG: C++
*/
#include <bits/stdc++.h>
#define rep(i, a, b) for(ll i=ll(a); i<ll(b); i++)
#define sq(x) ((x)*(x))

using namespace std;
using ll = long long;
typedef vector<long long> vi;
typedef pair<long long,long long> pi;
vector<ll> primes;

// bool checkPalindrome(ll n) 
// { 
//     ll reverse = 0; 
//     ll temp = n; 
//     while (temp != 0) { 
//         reverse = (reverse * 10) + (temp % 10); 
//         temp = temp / 10; 
//     } 
//     return (reverse == n);
// }

bool is_prime(ll n)
{
    if (n==1)return false;
    if (n==2||n==3||n==5||n==7)return true;
    for(ll i=2;sq(i)<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

// d: digits
void generate(ll d)
{
    bool is_odd=d%2==1?true:false;
    ll half = is_odd?(d-1)/2:d/2;
    ll low=pow(10,half-1);
    ll hi=pow(10,half)-1;
    rep(i,low,hi+1){
        string a=to_string(i);
        string b=string(a);
        reverse(b.begin(),b.end());
        
        if(is_odd){
            rep(j,0,10){
                string s=a+to_string(j)+b;
                ll n=stoi(s);
                if (is_prime(n)){
                    primes.emplace_back(n);
                }
            }
        }
        else{
            string s=a+b;
            ll n=stoi(s);
            if (is_prime(n)){
                primes.emplace_back(n);
            }
        }
    }
}

int main() {
    ifstream cin("pprime.in");
    ofstream cout("pprime.out");
    ll a,b;
    cin >> a >> b;
    
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);

    rep(i,1,10){
        generate(i);
    }

    for(ll n:primes){
        if(n>b)break;
        if(n>=a)
            cout << n << '\n';
    }

    exit(0);
}