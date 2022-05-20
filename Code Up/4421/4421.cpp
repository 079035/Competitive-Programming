#include <iostream>
#include <string.h>
#include <algorithm>
#include <limits.h>

using namespace std;

int arr[50][50], c = 0;
int p[4]={-1,0,0,1}, q[4]={0,-1,1,0};

void dfs(int x, int y){
    arr[x][y]=0;
    c++;
    for(int i=0;i<4;i++){
        if(arr[x+p[i]][y+q[i]]==1)dfs(x+p[i], y+q[i]);
    }
    return;
}

int main()
{
    int n, cnt[1000], idx=0;
    cin>>n;
    memset(arr, -1, sizeof(arr));
    for(int i=0;i<1000;i++){
        cnt[i]=10000;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%1d", &arr[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                dfs(i, j);
                cnt[idx]=c;
                c=0;
                idx++;
            }
        }
    }

    sort(cnt, cnt+1000);
    cout<<idx<<endl;
    for(int i=0;cnt[i]!=10000;i++){
        cout<<cnt[i]<<endl;
    }
    
    return 0;
}