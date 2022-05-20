#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int L = n / k, i = 1;
    if (L > 9999)
    {
        cout << "번호 초과 오류" << endl;
        return 0;
    }
    while (i <= L)
    {
        printf("F-%04d\n", i);
        i++;
    }
    return 0;
}