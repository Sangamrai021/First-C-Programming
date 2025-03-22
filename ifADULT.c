#include <stdio.h>

int main() {
    // Your code goes here
    int n;
    printf("Enter age : ");
    scanf("%d", &n);
    if (n>=18 )
    {
        /* code */
        printf("The person is Adult\n");
        printf("They can Vote\n");
        printf("Thy can Drive\n");
    }
    else if(n>13 && n<=18){
        printf("Teenager\n");
        printf(" can't Vote");
        printf(" can't Drive");
    }
    else{
        printf("The person is child");
        
    }
    
    return 0;
}