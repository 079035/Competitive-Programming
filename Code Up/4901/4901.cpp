#include <iostream>
#include <algorithm>
using namespace std;

int n;
long long int ans=0;

struct dat{
    int coor, color;
};

dat arr[100001];

int cmp1(dat &p, dat &q){
    return p.color<q.color;
}
int cmp2(dat &p, dat &q){
    return p.coor<q.coor;
}

int find(int idx){
    int l;
    if(idx>0&&idx<n-1){
        if(arr[idx+1].color==arr[idx].color && arr[idx-1].color==arr[idx].color)
            l=min(arr[idx+1].coor-arr[idx].coor, arr[idx].coor-arr[idx-1].coor);
        else if(arr[idx+1].color==arr[idx].color)
            l=arr[idx+1].coor-arr[idx].coor;
        else if(arr[idx].color==arr[idx-1].color)
            l=arr[idx].coor-arr[idx-1].coor;
        else 
            l=0;
        //l=min(arr[idx].coor - arr[idx-1].coor, arr[idx+1].coor - arr[idx].coor);
    }
    else if(idx>0){
        if(arr[idx].color==arr[idx-1].color)
            l=arr[idx].coor-arr[idx-1].coor;
        else l=0;
    }
    else {
        if(arr[idx].color==arr[idx+1].color)
            l=arr[idx+1].coor-arr[idx].coor;
        else l=0;
    }
    return l;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i].coor>>arr[i].color;
    }
    sort(arr, arr+n, cmp1);
    int t=arr[0].color, s=0;
        /*
        cout<<"First sort: "<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i].coor<<" "<<arr[i].color<<endl;
        }
        */
    for(int i=0;i<n;i++){
        if(arr[i].color!=t){
            sort(&arr[s], arr+i, cmp2);
            s=i;
            t=arr[i].color;
        }
    }
    sort(&arr[s], arr+n, cmp2);
        /*
        cout<<"Second sort: "<<endl;
        for(int i=0;i<n;i++){
            cout<<arr[i].coor<<" "<<arr[i].color<<endl;
        }
        */
    for(int i=0;i<n;i++){
        ans+=find(i);
    }
    cout<<ans<<endl;
    return 0;
}