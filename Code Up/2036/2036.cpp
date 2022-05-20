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
    int N;
    cin>>N;
    
    while(N--)
    {
        vector<int> v;
        vector<int> sec;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>48&&s[i]<58){
                v.pb(s[i]-48);
                sec.pb(s[i]-48);
            }
        }
        for(auto itr=v.begin();itr!=v.end();itr+=2)
        {
            *itr*=*(itr+1);
            (*(itr+1))--;
        }
        cout<<v[0]<<"*x^"<<v[1];
        for(auto itr=v.begin()+2;itr!=v.end();itr++)
        {
            if((itr-v.begin())%2==0)
                cout<<"+"<<*itr;
            else
            {
                cout<<"*x^"<<*itr;
            }
        }

        for(auto itr=sec.begin();itr!=sec.end();itr+=2)
        {
            (*(itr+1))++;
            *itr/=*(itr+1);
        }

        cout<<" "<<sec[0]<<"*x^"<<sec[1];
        for(auto itr=sec.begin()+2;itr!=sec.end();itr++)
        {
            if((itr-sec.begin())%2==0)
                cout<<"+"<<*itr;
            else
            {
                cout<<"*x^"<<*itr;
            }
        }
        cout<<"+c"<<endl;
    }

    return 0;
}