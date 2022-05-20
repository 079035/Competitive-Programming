//dfs
#include <iostream>
#include <algorithm>
using namespace std;

int arr[110][110]={0}, area[10001]={0}, idx=0, num=0, n, m;
int p[4]={-1,0,0,1}, q[4]={0,-1,1,0};

void dfs(int x, int y)
{
    arr[x][y]=2;
    area[num]++;
    for(int i=0;i<4;i++)
    {
        if(x+p[i]<0||x+p[i]>=n||y+q[i]<0||y+q[i]>=m)
            continue;
        if(arr[x+p[i]][y+q[i]]==0)
            dfs(x+p[i], y+q[i]);
    }
}

int main()
{
    int k;
    cin>>n>>m>>k;

    while(k--)
    {
        int x1, y1, x2, y2;
        cin>>y1>>x1>>y2>>x2;
        for(int i=x1;i<x2;i++){
            for(int j=y1;j<y2;j++)
            {
                arr[i][j]=1;
            }
        }
    }
    /*
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==0)
            {
                num++;
                dfs(i,j);
            }
        }
    }
    if(num==0){
        cout<<0<<endl;
        return 0;
    }
    cout<<num<<endl;
    sort(area+1,area+num+1);
    for(int i=1;i<=num;i++)
    {
        cout<<area[i]<<" ";
    }
    cout<<endl;
    return 0;
}