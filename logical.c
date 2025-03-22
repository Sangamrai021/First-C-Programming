#include<stdio.h>
int main(){
    // && - AND 
    printf("%d\n", 4>3 && 5>2);
    printf("%d\n", 4>3 && 1>5);
    printf("\n****************\n");

    // || - OR
    printf("%d\n", 4>3 || 5>2);
    printf("%d\n", 4>3 || 1>5);
    printf("%d\n", 1>3 || 1>5);
    printf("\n****************\n");

    // ! - NOT
    printf("%d\n", !(4>3));
    printf("%d\n", ! (1>5));
    printf("%d\n", ! (10>5));
    printf("\n****************\n");

    printf("%d", !((5>4) && (3>4)) );



    return 0;
}