#include <stdio.h>

int main() {
    char day; //s-sun, m-mon, t-tue, and so on...
    printf("Enter day : ");
    scanf("%c", &day);
    switch (day)
    {
    case 's': printf("sunday");
        break;
    case 'm': printf("monday"); 
        break;
    case 't': printf("tuesday");
        break;
    case 'w': printf("wednesday");   
        break;
    case 'T': printf("thursday"); 
        break;
    case 'f': printf("friday");
        break;
    case 'S': printf("saturday");   
        break;

    default: printf("not a valid day");
        break;
    }

    return 0;
}