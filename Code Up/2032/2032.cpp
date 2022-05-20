#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int n=0, j;
string s;

int main()
{
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        n=n*10+s[i]-'0';
    }
    for(int i=0;i<10;i++)
    {
        n*=2;
        printf("%d", n/(int)pow(10,l));
        n%=(int)pow(10,l);
    }
    return 0;
}