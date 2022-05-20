#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#define pb push_back

using namespace std;
typedef long long ll;

int n,m;    //n=x=i, m=y=j
int arr[1001][1001]={0};
int v[1001][1001]={0};

struct coor{
    int x;
    int y;
};

bool visited(coor t)
{
    if(arr[t.x][t.y]==1) return true;
    return false;
}
bool OB(coor t)
{
    if(t.x<0||t.x>=n||t.y<0||t.y>=m)return true;
    else return false;
}

int check()
{
    queue<coor> Q;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==1)
            {
                Q.push(coor{i,j});
                arr[i][j] = 0;
            }
        }
    }
    int days=-1;
    while(!Q.empty())
    {
        days++;
        int sq = Q.size();
        for(int i=0;i < sq;i++)
        {
            coor cur = Q.front(); Q.pop();
            if(OB(cur)) continue;
            if(visited(cur)) continue;
            if(arr[cur.x][cur.y]==-1) continue;
            int foo = arr[cur.x][cur.y];
            if(foo==0)
            {
                v[cur.x][cur.y]=true;
                arr[cur.x][cur.y]=1;
                Q.push(coor{cur.x+1, cur.y}); Q.push(coor{cur.x-1, cur.y});
                Q.push(coor{cur.x, cur.y+1}); Q.push(coor{cur.x, cur.y-1});
            }
        }
    }
    days--;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==0){days=-1;goto DONE;}
        }
    }
DONE: 
    return days;
}

int main()
{
    //idx: 0<-<n & 0<-<m
    cin>>m>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<check()<<endl;

    return 0;
}