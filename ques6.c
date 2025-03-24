//to find if a character entered by user is uppercase or not
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    if (ch>='A' && ch<='Z' )
    {
        printf("it is upper case\n");
    }
    else if(ch>='a' && ch<='z')
    {
        printf("it is lower case\n");
    }
    else{
        printf("not english character");
    }

    return 0;
}