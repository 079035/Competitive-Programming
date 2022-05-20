#include <iostream>

using namespace std;

long long f(long long n, long long k)
{
    if (k <= 0)
        return 1;
    return n * f(n, k - 1);
}

int main()
{
    int n, k;
    cin >> n >> k;
    if(n==1){
        cout<<n<<endl;
        return 0;
    }
    if(n==-1){
        if(k%2)
            cout<<-1<<endl;
        else cout<<1<<endl;
        return 0;
    }
    cout << f(n, k) << endl;
    return 0;
}