/*to check if a student passed or failed
marks>30  is pass
marks<=30 is fail */
#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks(1-100) : ");
    scanf("%d", &marks);

    /*for ternary
    marks<=30 ? printf("failed"): printf("passed");
    */

    if (100>marks>30)
    {
        printf("passed");
    }
    else if(marks<=30){
        printf("failed");
    }
    else{
        printf("wrong marks");
    }
    return 0;


}