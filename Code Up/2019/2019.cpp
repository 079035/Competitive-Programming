#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
 float a,b,c;
 cin>>a>>b>>c;
 float det=b*b-4*a*c;
 if(det==0){
     if(-1*b/(2*a)==0){
         printf("0.00\n");
     }
    else printf("%.2f\n", -1*b/(2*a));
   return 0;
 }
 if(det<0){
   det*=-1;
   det=sqrt(det);
   if(det/(2*a)<0){
        printf("%.2f+%.2fi\n", b*-1 / (2*a), det/(2*a)*-1);
        printf("%.2f-%.2fi\n", b*-1 / (2*a), det/(2*a)*-1);
   }
   else{
    printf("%.2f+%.2fi\n", b*-1 / (2*a), det/(2*a));
    printf("%.2f-%.2fi\n", b*-1 / (2*a), det/(2*a));
   }
 }
 else {
   det=sqrt(det);
   printf("%.2f\n", b*-1/(2*a)+det/(2*a));
   printf("%.2f\n", b*-1/(2*a)-det/(2*a));
 }
}
 

