#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#define pb push_back

using namespace std;
typedef long long ll;

int numDiff(string n1, string n2)
{
    int res=0;
    for(int i=0;i<n1.length();i++)
    {
        if(n1[i]!=n2[i])res++;
    }
    return res;
}

int main()
{
    int n,k,i;
    cin>>n>>k; //str.length() = k
    vector<string> arr;
    for(i=0;i<n;i++)
    {
        string n1;
        cin>>n1;
        arr.pb(n1);
    }
    int key1, key2;
    cin>>key1>>key2;
    key1--;key2--;

    int MU = numDiff(arr[key1], arr[key2]);
    
    int curDiff=1;
    vector<int> path;
    while(curDiff != MU)
    {
        bool passed=false;
        for(i=0;i<n;i++)
        {
            if(i==key1||i==key2)continue;
            if(numDiff(arr[key1], arr[i])==curDiff){
                passed=true;
                path.pb(i);
                curDiff++;
                break;
            }
        }
        if(passed==false)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<key1+1<<" ";
    for(auto itr=path.begin();itr!=path.end();itr++)
        cout<<*itr+1<<" ";
    cout<<key2+1<<endl;
    
    return 0;
}