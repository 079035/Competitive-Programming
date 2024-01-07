#include<iostream>
#include<algorithm>
#include<vector>
typedef long long ll;
int main(){
    int n, m;
    std::cin>>n>>m;
    std::vector<int> v(n + 1,0);
    std::vector<ll> sum(n + 1,0);
    for (int i = 1; i <= n;++i){
        scanf("%d", &v[i]);
        sum[i] = sum[i - 1] + v[i];
    }
    for (int i = 0; i < m;++i){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%lld\n",sum[b] - sum[a - 1]);
    }
    exit(0);
}