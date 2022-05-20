/*  
    <<<SUPER FOCUS MODE ON>>>
    n-1 를 C로 움직인다.
    n번째 판을 B로 이동한다.
    C에 있는 n-1개를 A로 움직인다.
    B에 있는 n번째 판을 C로 움직인다.
    나머지 A에 있는 n-1개 판을 C로 움직인다.
*/

#include <iostream>
using namespace std;

int cnt = 0;

void goup(int n, int id);
void godown(int n, int id);
void hanoi(int n, int id);

int main(){
    int n;
    cin>>n;
    if(n==1){
        printf("1 : A->B\n1 : B->C\n");
        cout<<2<<endl;
        return 0;
    }
    hanoi(n, n);
    cout<<cnt<<endl;
    return 0;
}

void goup(int n, int id){
    if(n>1){
        goup(n-1, id-1);
        printf("%d : A->B\n", id);
        cnt++;
        godown(n-1, id-1);
        printf("%d : B->C\n", id);
        cnt++;
        goup(n-1, id-1);
    }
    else{
        printf("%d : A->B\n", id);
        printf("%d : B->C\n", id);
        cnt+=2;
        id++;
    }
}
void godown(int n, int id){
    if(n>1){
        godown(n-1, id-1);
        printf("%d : C->B\n", id);
        cnt++;
        goup(n-1,id-1);
        printf("%d : B->A\n", id);
        cnt++;
        godown(n-1,id-1);
    }
    else{
        printf("%d : C->B\n", id);
        printf("%d : B->A\n", id);
        cnt+=2;
        id++;
    }
}

void hanoi(int n, int id){  //Parent
    goup(n-1, n-1); //move n-1 A to C
    printf("%d : A->B\n", n);
    cnt++;
    godown(n-1, n-1); //move n-1 C to A
    printf("%d : B->C\n", n);
    cnt++;
    goup(n-1, n-1); //finishing
    return;
}