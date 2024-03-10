/*
ID: jordidc1
PROG: pprime
LANG: C++
*/
#include <bits/stdc++.h>
#define rep(i, a, b) for(ll i=ll(a); i<ll(b); i++)
#define sq(x) ((x)*(x))

using namespace std;
typedef long long ll;
typedef vector<long long> vi;
typedef pair<long long,long long> pi;

bool checkPalindrome(ll n) 
{ 
    ll reverse = 0; 
    ll temp = n; 
    while (temp != 0) { 
        reverse = (reverse * 10) + (temp % 10); 
        temp = temp / 10; 
    } 
    return (reverse == n);
}

int main() {
    ifstream cin("pprime.in");
    ofstream cout("pprime.out");
    ll a,b;
    cin >> a >> b;
    vi primes;
    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    rep(i,11,b+1){
        bool is_prime = true;
        rep(j,0,primes.size()){
            if(sq(primes[j])>i)
                break;
            if(i%primes[j]==0){
                is_prime = false;
                break;
            }
        }
        if(is_prime)
            primes.push_back(i);
    }
    rep(i,0,primes.size()){
        if(primes[i]<a)
            continue;
        if(checkPalindrome(primes[i]))
            cout << primes[i] << '\n';
    }
    // exit(0);
}