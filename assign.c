#include<stdio.h>
int main(){

    int a=1;
    int b=4;
    // a=a+b;  // a+=b;
    a*=b;
    b+=a;   //  b=b+a;
    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}