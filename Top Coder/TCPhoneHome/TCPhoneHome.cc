#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
class TCPhoneHome
{
    public:
    ll validNumbers(int digits, vector<string> specialPrefixes)
    {
        sort(specialPrefixes.begin(), specialPrefixes.end());
        ll ways = (ll)ceil(pow((ll)10, digits));
        //cout << ways << endl;
        for (auto itr = specialPrefixes.begin(); itr != specialPrefixes.end();itr++)
        {
            bool good = true;
            for (auto i = specialPrefixes.begin(); i != itr;i++){
                if((*itr).find(*i)==0)
                {
                    good = false;
                    break;
                }
            }
            if(!good)
                continue;
            string s = *itr;
            //cout << s.length() << endl;
            if(s.length()==digits){
                ways-=1;
                continue;
            }
            ll l = digits - (*itr).length();
            ways -= pow((ll)10, l);
        }
        return ways;
    }
};
int main(){
    vector<string> v;
    v.pb("56350284687597285");
    v.pb("64983369012138384");
    v.pb("87315765436177801");
    TCPhoneHome p;
    ll w = p.validNumbers(17, v);
    cout << w << endl;
}