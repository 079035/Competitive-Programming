#include <iostream>
#include <unordered_set>

using namespace std;

bool pos(int n){
        int res=0;
        while(n--){
                res+=n;
        }
        if(res%2==1)return false;
        else return true;
}

int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    if(!pos(n)){
            cout<<"NO"<<endl;
            return 0;
    }
    else cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    
}
