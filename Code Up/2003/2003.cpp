#include <iostream>

using namespace std;

int main()
{
    int k;
    char arr[3][3] = {{'*', 'x', '*'}, {' ', 'x', 'x'}, {'*', ' ', '*'}};
    cin >> k;
    for(int i=0;i<3;i++){
        for(int p=0;p<k;p++){
            for(int j=0;j<3;j++){
                for(int q=0;q<k;q++){
                    cout<<arr[i][j];
                }
            }
            cout<<endl;
        }
    }
    return 0;
}