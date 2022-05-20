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
    int n;
    int ans=0;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1){   //special case
        if(arr[0]==1)
            cout<<0<<endl;
        else 
            cout<<1<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            if(arr[i]==0&&arr[1]==0)ans++;
        }
        else if(i==n-1)
        {
            if(arr[i]==0&&arr[i-1]==0)ans++;
        }
        else if(arr[i-1]==0&&arr[i+1]==0&&arr[i]==0)ans++;
    }
    cout<<ans<<endl;
    return 0;
}