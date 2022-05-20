#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#define pb push_back

using namespace std;
typedef long long ll;

int main()
{
    float n;
    cin>>n;
    float t=n;
    float lim=n*2;
    cout<<'{';
    for(int i=t;i<lim;i++){
        cout<<i;
        if(i!=lim-1)cout<<", ";
        else cout<<'}';
    }
    cout<<endl;
    return 0;
}