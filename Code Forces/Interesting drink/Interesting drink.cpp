#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long int n, ans(0);
    cin>>n;
    long long int *a=new long long int[n];
    for(long long int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    long long int d;
    cin>>d;
    long long int *b=new long long int[d];
    for(long long int i=0; i<d; i++){
        cin>>b[i];
        cout<<upper_bound(a, a+n, b[i])-a<<endl;
    }

    return 0;
}