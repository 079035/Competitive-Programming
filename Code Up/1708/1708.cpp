#include <iostream>
#include <vector>
using namespace std;
int arr[1001][2]={0}, n;

bool check(){
    for(int i=0;i<n;i++){
        if(arr[i][1]==0)return false;
    }
    return true;
}

int main()
{
    int r = 1;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i][0];
    int prev_max = 0, q = 0;
    for(int i=0;i<n;i++){
        if(arr[i][0]>=prev_max)prev_max=arr[i][0];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] == prev_max)
        {
            arr[i][1] = r;
            q++;
        }
    }
    r += q;
    for (int i = 0; i < n; i++)
    {
        int cur_max = 0;
        for (int j = 0; j < n; j++)
            if (arr[j][0] < prev_max && arr[j][0] >= cur_max)
                cur_max = arr[j][0];
        int q = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j][0] == cur_max)
            {
                arr[j][1] = r;
                q++;
            }
        }
        r += q;
        prev_max=cur_max;
        if(check())break;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i][0] << " " << arr[i][1] << endl;

    return 0;
}