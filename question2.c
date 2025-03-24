//the average of 3 numbers
#include<stdio.h>
int main(){

    int n,m,o,avg;
    // float avg;
    printf("Enter any three number : \n");
    scanf("%d %d %d",&n, &m, &o);
    avg= (n+m+o) / 3;
    printf("%d is average of three number", avg);

    return 0;   
}