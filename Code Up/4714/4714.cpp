#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

int N, M;

vector<int> v[501];
int visited[501];
int big[501];
int small[501];

int main(){
    scanf("%d %d", &N, &M);

    for (int i = 0; i < M; ++i){
        int a, b; scanf("%d %d", &a, &b);
        v[b].push_back(a);//b보다 작은 리스트
    }

    for (int i = 1; i <= N; ++i){//각 학생별로 확인
        queue<int> q;
        int start = i;
        memset(visited, -1, sizeof(visited));

        q.push(start);
        while (!q.empty()){
            int here = q.front(); q.pop();
            for (int j = 0; j < v[here].size(); ++j){
                int there = v[here][j];
                if (visited[there] == -1){
                    visited[there] = 1;
                    q.push(there);
                    small[start]++;
                    big[there]++;
                }
            }
        }
    }

    int cnt = 0;
    for (int i = 1; i <= N; ++i){
        if ((big[i] + small[i] + 1) == N)cnt++;
    }
    
    cout << cnt << endl;
    return 0;
}