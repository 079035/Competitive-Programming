#include <bits/stdc++.h>
using namespace std;

#define MAX 200001
int main(){
    int n;
    cin>>n;
    int arr[MAX], k[MAX];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector <int> v;
    int var;
    memset(k, 0, sizeof(k));
    for(int i=n-1;i>=0;i--){
        int var=arr[i];
        k[var]++;
        if(k[var]==1){
            v.push_back(var);
        }
    }
    cout<<v[v.size()-1]<<endl;
    return 0;
}