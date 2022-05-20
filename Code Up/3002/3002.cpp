#include <iostream>

using namespace std;

typedef long long ll;

ll binarySearch(ll A[], ll N, ll value) {//k
  ll low = 0;
  ll high = N - 1;
  while (low <= high) {
      ll mid = (low + high) / 2;
      if (A[mid] > value)
          high = mid - 1;
      else if (A[mid] < value)
          low = mid + 1;
      else
          return mid; // found k
  }
  return -1; // not found k
}

int main(){
    ll n, m, tmp, res;
    cin>>n;
    ll *arr=new ll[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    for(ll i=0;i<m;i++){
        cin>>tmp;
        res=binarySearch(arr, n, tmp);
        if(res==-1)cout<<-1<<" ";
        else cout<<res+1<<" ";
    }
    
    return 0;
}