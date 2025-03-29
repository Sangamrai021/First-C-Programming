//Sum of two number

#include <stdio.h>
int sum(int a, int b); //function declaration

int main() {
    int a,b;
    printf("Enter two number :\n ");
    scanf("%d %d", &a, &b);


    //function called
    int s=sum( a, b);

    printf("sum is %d",s);

    return 0;
}

//functin define
int sum(int x, int y){
    return x+y;  //this return goes to calling function
}