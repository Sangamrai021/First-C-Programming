#include<stdio.h>
int main(){
	int num1, num2, quo, rem;
    float divide;
	printf("Enter dividen number : \n");
	scanf("%d",&num2);
	printf("Enter divisor number : \n");
	scanf("%d",&num1);
	quo=num2/num1;
	rem=num2%num1;
    divide=num2 / num1;
	printf("the quotient is : %d\n",quo);
	printf("the reminder is : %d\n",rem);
    printf("the divide is : %f", divide);
	return 0;
}
