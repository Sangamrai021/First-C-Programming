#include <stdio.h>

int main() {

    int m;
    printf("Enter your marks : ");
    scanf("%d", &m);

    if (m>=90)
    {
        printf("You've scored A+\n");
        printf("You've got GPA between 3.65 to 4.0\n");
    }
    else if(m>=80){
        printf("You've scored A\n");
        printf("You've got GPA between 3.25 to 3.60\n");
    }
    else if(m>=70){
        printf("You've scored B+\n");
        printf("You've got GPA between 2.85 3.20\n");
    }

    printf("Thank you");

    return 0;
}