/*
ID: jordidc1
TASK: milk
LANG: C++
*/
#include <fstream>
#include <algorithm>
using namespace std;

struct milk{
    int price;
    int unit;
};

bool cmp(milk &p, milk &q){
    return p.price < q.price;
}

int main(){
    ifstream fin("milk.in");
    ofstream fout("milk.out");
    long long sum=0;
    int n,m;
    fin>>n>>m;
    milk arr[5000];
    for(int i=0;i<m;i++)
        fin>>arr[i].price>>arr[i].unit;
    sort(arr, arr+m, cmp);
    for(int i=0;i<m;i++){
        if(arr[i].unit<=n){
            sum+=arr[i].price*arr[i].unit;
            n-=arr[i].unit;
        }
        else{
            sum+=arr[i].price*n;
            n=0;
        }
    }
    fout<<sum<<endl;

    return 0;
}