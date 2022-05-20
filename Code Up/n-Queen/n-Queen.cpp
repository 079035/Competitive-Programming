#include <iostream>
#define rep(i, a, b) for (int i = a; i <= b; i++)
typedef long long ll;
using namespace std;

// 열, 증가하는 대각선, 감소하는 대각선의 상태를 기록하는 배열(col, inc, dec)
int n, ans, col[10], inc[20], de[20]; //dec
void solve(int r)
{
    if (r > n)
    {          // 마지막 행까지 체크 후 호출되었을 경우
        ans++; // 배치 방법을 찾은 것이므로 개수 추가
        return;
    }
    for (int i = 1; i <= n; i++) // 한 행에서의 모든 경우 체크
        if (!col[i] && !inc[r + i] && !de[n + (r - i) + 1])
        {                                                  // 열, 증가 대각선, 감소 대각선 가능한지 체크
            col[i] = inc[r + i] = de[n + (r - i) + 1] = 1; // 가능하면 기록
            solve(r + 1);                                  // 다음 행에 대해서 체크

            // 이 점의 가능한 경우에 대한 연산은 윗 문장으로 수행하므로 이전 전체탐색의 흔적을 지우는 부분
            col[i] = inc[r + i] = de[n + (r - i) + 1] = 0;
        }
}

int main()
{
    cin >> n;
    solve(1);
    cout << ans << endl;

    return 0;
}