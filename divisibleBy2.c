#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    if (n%2==0)
    {
        /* code */
        printf("Divisible",n);
    }
    else
    {
        /* code */
        printf("Not-Divisible",n);
    }

    return 0;
}