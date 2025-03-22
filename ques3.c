//to check if given character is digit or not
#include <stdio.h>

int main() {
    int ch;
    printf("Enter a Character : ");
    scanf("%c",&ch);

  // Using logical AND (`&&`) and logical OR (`||`) to check and print directly
//   ('0' <= ch && ch <= '9') && printf("%c is a digit.\n", ch);
//   ('0' > ch || ch > '9') && printf("%c is not a digit.\n", ch);

 // Checking if character is a digit
 if (ch >= '0' && ch <= '9') {
    printf("%c is a digit.\n", ch);
} else {
    printf("%c is not a digit.\n", ch);
}
    return 0;
}