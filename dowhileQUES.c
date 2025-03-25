//Print the sum of first n natural numbers, also print them in reverse.
#include <stdio.h>               
int main() {
    int n;
    printf("Enter a number : \n");
    scanf("%d", &n);

    printf("The sum of first n natural numbers are : \n");
    int i=1;
    int sum=0;
    
    do
    {
        sum=sum+i;
        i++;
    } while (i<=n);
    printf("%d\n",sum );
    return 0;

    /*    using for loop
    
    for(int i=1; i<=5; i++){
        sum=sum+i;
    }
    printf(" sum is %d \n",sum);
    
    
    //reversing nmber
    for(int i=n; i<=5; i--){
       printf(" %d \n",i);
    }


    //alternative
    for(int j=n; j>=1; j--){
        sum=sum+j;
        printf(" %d \n",j);
    }
    printf(" sum is %d \n",sum);
    
    */


}