#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k, cnt=0;
    cin>>n>>k;
    
    vector<int> arr[26];
    
    int *num=new int[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    
    char str[7];
    for(int i=0;i<n;i++){
        scanf("%c", &str[i]);
    }
    
    arr[str[0]-97].push_back(num[0]);
    
    for(int i=1;i<n;i++){
        if(str[i]==str[i-1]){
            cnt++;
            if(cnt+1>k){
                arr[str[i]-97].push_back(num[i]);
                sort(arr[i].begin(), arr[i].end());
                arr[i].erase(arr[i].begin());
                cnt--;
            }
            continue;
        }
        cnt=0;
        arr[str[i]-97].push_back(num[i]);
    }
    
    long long int sum = 0;
    
    for(int i=0;i<26;i++){
        if(arr[i].size()>0){
            for(int j=0;j<arr[i].size();j++){
                sum+=arr[i][j];
            }
        }
    }
    
    cout<<sum<<endl;

    return 0;
}
