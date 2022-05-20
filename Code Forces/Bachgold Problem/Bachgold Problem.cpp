#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, cnt(0);
    cin>>n;
    vector<int> v;
    if(n%2==1){
        n-=3;
        v.push_back(3);
        cnt++;
        while(n>0){
            n-=2;
            v.push_back(2);
            cnt++;
        }
    }
    else{
        int end=n/2;
        for(int i=0;i<end;i++){
            v.push_back(2);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}