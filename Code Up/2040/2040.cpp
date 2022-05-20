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
    int arr[10], i;
    int cnt=0;
    int save[10][2]={0};
    for(i=0;i<10;i++)
        cin>>arr[i];
    for(i=0;i<10;i++)
    {
        for(int j=i-1;j>=0 && save[i][1]==0;j--)
        {
            if(save[i][0]==0)save[i][0]=arr[j];
            else if(arr[j]!=save[i][0])save[i][1]=arr[j];
        }
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]==save[i][0]||arr[i]==save[i][1])cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}