#include <stdio.h>
void Table(int n); //declare
int main() {
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    Table(n);  //calling statement variable is known as arguments / actual parameter

    return 0;
}

//defining statement varaible is parameter / formal parameter
void Table(int n){
    for ( int i = 1; i<=10; i++)
    {
       printf(" %d ", i*n);
    }
    
}
