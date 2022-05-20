#include <iostream>
#include <algorithm>
using namespace std;

typedef pair<int, int> pii;
struct Order{
    int src, dst, size;
};

Order orders[10001];

bool cmp(const struct Order &p, const struct Order &q){
    if(p.dst!=q.dst)return p.dst<q.dst;
    else return p.src<q.src;
}
int loaded[2001];
int main(){
    int ans = 0;
    int n, c, m;
    cin>>n>>c>>m;
    for(int i=0;i<m;i++){
        cin>>orders[i].src>>orders[i].dst>>orders[i].size;
    }
    sort(orders, orders+m, cmp);
    for(int i=0;i<m;i++){
        auto& order = orders[i];
        int a(0);
        for(int pos=order.src; pos<order.dst; pos++){
            if(loaded[pos]>a){
                a=loaded[pos];
            }
        }
        int ca=min(order.size, c-a);
        for(int pos=order.src; pos<order.dst; pos++){
            loaded[pos]+=ca;
        }
        ans+=ca;
    }
    cout<<ans<<endl;
    return 0;
}