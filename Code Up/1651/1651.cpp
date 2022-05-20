#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int i,l,j,k,len, w,h,n;
    char arr[1000][10000];
    cin>>w>>h>>n;
    for(int i=0;i<n;i++){
        scanf("%s", arr[i]);
    }
    for (i = 0; i < n; i++)
        for (l = 0; l < h; l++, puts(""))
            for (j = 0, len = strlen(arr[i]); j < len; j++)
                for (k = 0; k < w; k++)
                    printf("%c", arr[i][j]);
    return 0;
}