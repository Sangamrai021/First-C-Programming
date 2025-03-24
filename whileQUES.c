//print the number from 0 to n , if n is given by user
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number :"); 
    scanf("%d", &n); 

    printf("The number from 0 to n \n"); 
    int i=0;  // initialization
    while (  i<=n ) //condition
    {
        
        printf(" %d \n", i); 
        i++;  //updation (increment)
    }
    return 0;
}