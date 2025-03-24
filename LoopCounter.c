#include <stdio.h>

int main() {
    float i;
    char ch;
    for ( i = 1.0; i<=5.0 ; i++)
    {
        printf("%.2f\n",i);  
    }

    for ( ch = 'a'; ch<='h' ; ch++)
    {
        printf("%c\n",ch);  
    }

    //we can even take double, int as a iterator or counter variable.
    return 0;
}