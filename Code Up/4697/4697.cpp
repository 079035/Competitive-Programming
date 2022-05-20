#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#define pb push_back

using namespace std;
typedef long long ll;

int arr[1000][1000]={0};
int tmp[1000][1000]={0};
int p[4]={-1,0,0,1}, q[4]={0,-1,1,0};

void dfs(int x, int y)
{
    tmp[x][y]=-1;
    for(int i=0;i<4;i++)
    {
        if(tmp[x+p[i]][y+q[i]]!=0&&tmp[x+p[i]][y+q[i]]!=-1)
        {
            dfs(x+p[i], y+q[i]);
        }
    }
}

int main()
{
    int n, ans=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int maxHeight=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(arr[i][j]>maxHeight)maxHeight=arr[i][j];
        }
    }
    
    //cout<<maxHeight<<endl;
    for(int k=0;k<maxHeight;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                tmp[i][j]=arr[i][j];
            }
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(tmp[i][j]<=k)tmp[i][j]=0;
            }
        }
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(tmp[i][j]!=0&&tmp[i][j]!=-1)
                {
                    cnt++;
                    dfs(i,j);
                }
            }
        }
        /*
        cout<<endl;
        for(int i=0;i<=n+1;i++)
        {
            for(int j=0;j<=n+1;j++)
            {
                cout<<tmp[i][j]<<" ";
            }
            cout<<endl;
        }
        */
        if(cnt>ans)ans=cnt;
    }
    cout<<ans<<endl;
    return 0;
}