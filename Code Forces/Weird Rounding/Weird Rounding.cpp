#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>
#define pb push_back

using namespace std;
typedef long long ll;

int k;
bool check(int n){
    if(n%k==0)return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;

    cin>>s;
    cin>>k;
    string em=s;
    if(s.length()<=k){
        cout<<s.length()-1<<endl;
        return 0;
    }
    k=round(pow(10,k));
    int n=0;
    stringstream id(s);
    id>>n;
    int cnt=0;
    //cout<<k<<endl;
    while(!check(n)){
        //cout<<"s: "<<s<<endl;
        //cout<<"cnt: "<<cnt<<endl;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!='0'){
                s.erase(i,1);
                stringstream id(s);
                id>>n;
                //if(s[0]=='0')cout<<n<<endl;
                cnt++;
                break;
            }
        }
        if(s[0]=='0'){
            cout<<em.length()-1<<endl;
            return 0;
        }
    }
    cout<<cnt<<endl;
    return 0;
}