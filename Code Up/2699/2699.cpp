#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int lcs(char *a, char *b, int m, int n){
    int L[1001][1001];
    memset(L, 0, sizeof(L[0][0])*m*n);
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0) L[i][j]=0;
            else if(a[i-1]==b[j-1]) L[i][j] = L[i-1][j-1] + 1;
            else L[i][j] = max(L[i-1][j], L[i][j-1]);
        }
    }
    return L[m][n];
}

int main(){
    char a[1001];
    char b[1001];
    scanf("%s", a);
    scanf("%s", b);
    int m=strlen(a);
    int n=strlen(b);
    cout<<lcs(a,b,m,n)<<endl;

    return 0;
}