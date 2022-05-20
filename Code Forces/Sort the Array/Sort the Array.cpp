#include <iostream>

using namespace std;

typedef long long ll;

ll n;

void reverse_array(ll *(&arr), ll start, ll end){
    ll tmp;
    ll c_end=end;
    if(c_end-start==1){
        tmp=arr[start];
        arr[start]=arr[end];
        arr[end]=tmp;
        return;
    }
    for(ll i=start;i<=(start+c_end)/2;i++){
        tmp=arr[i];
        arr[i]=arr[end];
        arr[end]=tmp; //get hacked kid
        end--;
    }
    return;
}

bool check(ll *(&arr)){
    for(ll i=1;i<n;i++){
        if(arr[i]<arr[i-1]) return false;
    }
    return true;
}

int main()
{
    ll s=-1, e;
    bool sort=true;
    cin>>n;
    ll *arr=new ll[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"yes"<<endl<<1<<" "<<1<<endl;
        return 0;
    }
    for(ll i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            sort=false;
            if(s==-1)
                s=i;
        }
        if(sort==false && arr[i]>arr[i-1]){
            reverse_array(arr, s-1, i-1);
            e=i;
            break;
        }
        if(sort==false && i==n-1 && s==1){
            cout<<"yes"<<endl<<1<<" "<<n<<endl;
            return 0;
        }
        else if(sort==false && i==n-1){
            reverse_array(arr, s-1, n-1);
        }
    }

    if(sort==true){
        cout<<"yes"<<endl<<1<<" "<<1<<endl;
        return 0;
    }

    if(check(arr)){
        cout<<"yes"<<endl<<s<<" "<<e<<endl;
        return 0;
    }
    else {
        cout<<"no"<<endl;
        return 0;
    }

    return 0;
}