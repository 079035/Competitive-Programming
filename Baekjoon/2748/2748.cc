#include <iostream>
#include <vector>
#include <algorithm>

typedef long long ll;

int main() {
    int n;
    std::cin>>n;
    std::vector<ll> fib(n + 1);
    fib[0] = 0;
    fib[1]=1;
    for (int i = 2; i <= n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    std::cout << fib[n] << '\n';
    exit(0);
}