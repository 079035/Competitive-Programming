#include <iostream>
#include <algorithm>
using namespace std;

int cmp(int &p, int &q){
    return p>q;
}

int main(){
    int n, a, b, c, arr[100], ans=0;
    cin>>n>>a>>b>>c;
    int price=a;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n, cmp);
    for(int i=0;i<n;i++){
        int calorie=c;
        price+=(i+1)*b;
        for(int j=0;j<=i;j++){
            calorie+=arr[j];
        }
        if(ans<calorie/price)ans=calorie/price;
        price=a;
    }
    cout<<ans<<endl;

    return 0;
}