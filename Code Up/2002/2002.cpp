#include <iostream>
#include <string>
using namespace std;

int main()
{
    int k;
    string o;
    cin >> k >> o;
    //얼만큼 증가?
    for (int i = 0; i < o.length(); i++)
    {
        int inc=3*(i+1)+k;
        int val=o[i]-64;
        val-=inc;
        while(val<0) val+=26;
        val%=26;
        if(val==0)cout<<'Z';
        else cout<<(char)(64+val);
    }

    return 0;
}