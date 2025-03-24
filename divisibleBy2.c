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

    /*mentor code
    instead of if else code,

    printf("%d", n%2==0);

    **************************
    output: 
    Enter anumber = 5
    0 
    Which is false
    **************************
    Enter anumber = 10
    1 
    Which is true
    
    */

    return 0;
}