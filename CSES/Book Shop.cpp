#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, x, h[1001], s[1001], a[100002][1001]; // h=price, s=page
    cin>>n>>x;
    for(int i=0;i<n;i++)
        cin>>h[i];
    for(int i=0;i<n;i++)
        cin>>s[i];                  // INPUT

    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(h[j]<=i)a[i][j]=max(a[i][j-1], a[i-h[j]][j-1]+s[j]);
            else a[i][j]=a[i][j-1]; 
        }
    }

    return 0;
}