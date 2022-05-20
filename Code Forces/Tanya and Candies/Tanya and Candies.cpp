#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, o=0, e=0, ans=0;
    cin>>n;
    int *arr=new int[n];
    vector<int> odd;
    vector<int> even;
    for(int i=0;i<n;i++){ //arr 만든 후 vector로 연산, erase() and insert() 사용 below is 쓰레기.
        cin>>arr[i];
        if(i%2==0){
            o+=arr[i]; //1번째가 index 0.
            odd.push_back(arr[i]);
        }
        else {
            e+=arr[i];
            even.push_back(arr[i]);
        }
    }

    // cout
    cout<<"odd sum: "<<o<<", even sum: "<<e<<endl;
    for(auto i=odd.begin();i!=odd.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i=even.begin();i!=even.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;


    for(auto i=odd.begin();i!=odd.end();i++){
        if(o-*i==e)ans++;
    }
    for(auto i=even.begin();i!=even.end();i++){
        if(e-*i==o)ans++;
    }
    cout<<ans<<endl;

    return 0;
}