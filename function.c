#include <stdio.h>
void printHello(); //function decleration

int main() {
    printHello(); //function called
    printHello();
    printHello(); 
    return 0;
}

//function defined
void printHello(){
    printf("Hello World \n");
}

