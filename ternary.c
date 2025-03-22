#include <stdio.h>

int main() {
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    
    //using ternary operator
    age>=18 ? printf("adult\n") : printf("not adult\n");

    return 0;
}