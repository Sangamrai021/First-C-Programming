#include<stdio.h>
int main(){
    int num1, num2, sub;
    printf("Enter greater number : \n");
    scanf("%d", &num2);
    printf("Enter smaller number : \n");
    scanf("%d", &num1);
    sub = num2-num1;
    printf("The difference is : %d", sub);
    return 0;
}