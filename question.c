//if 9<n<100
#include<stdio.h>
int main(){

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    //Mentor code :
    // printf("%d", 9<n && n<100);

    //my code :
    if (100>n && n>9)
    {
        printf("yes");
    }
    else{
        printf("No");
    }














    return 0;
}