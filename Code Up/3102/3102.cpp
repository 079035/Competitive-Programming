#include <stdio.h>
#include <string.h>

int main(){
    int n, t, arr[200], idx=0, j=1, num=0;
    char str[100];
    scanf("%d", &n);
    for(int i=0;i<n+1;i++){
        gets(str);
        if(i==0)continue;
        if(str[0]=='p' && str[1]=='u'){
            int s;
            for(int i=0;i<strlen(str);i++){
                if(str[i]>48 && str[i]<58){
                    s=i; //address
                    break;
                }
            }
            for(int i=strlen(str)-3;i>=s;i--){
                num+=(str[i]-48)*j;
                j*=10;
            }
            arr[idx]=num;
            idx++;
            j=1;
            num=0;
        }
        else if(str[0]=='t'){
            if(idx==0) printf("-1\n");
            else printf("%d\n", arr[idx-1]);
        }
        else if(str[0]=='p'){
            if(idx>0)idx--;
        }
        else if(str[0]=='s'){
            printf("%d\n", idx);
        }
        else {
            if(idx==0)printf("true\n");
            else printf("false\n");
        }
    }
    return 0;
}
