#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    //mentor code :
    // printf(" %d\n", n%2==0);
    // printf("It is Odd Number %d", n%2!=0);

    //My code:
    if (n%2==0)     //if (n%2!=1)
    {
        printf("%d is a Even Number",n);
    }
    else{
        printf("%d is a Odd Number",n);
    }
    










    return 0;
}