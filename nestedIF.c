#include <stdio.h>

int main() {
    int n;
    printf("Enter number :");
    scanf("%d",&n);

    if (n>=0)
    {
        printf("Positive\n");
        if (n%2==0)
        {
            printf("it is Even number\n");
        }else{
            printf("it is Odd number\n");
        }
        
    }
    else{
        printf("negative");
    }
    

    return 0;
}