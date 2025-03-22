#include<stdio.h>
int main(){
    printf("%d",4+9*5 );
     //apply associavity rule (Left to Right) for same precedence
     printf("\n%d",4*3/6*2 );
     printf("\n%d",5*2-2*3 );
     printf("\n%d",5*2/2*3 );
     printf("\n%d",5*(2/2)*3 );
     printf("\n%d",5+2/2*3 );
    return 0;
}