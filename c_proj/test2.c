#include <stdio.h>

int main(){
    int a=7;
    int b=6;

    if (a>b){ // compares whether the value of a is greater than the value of b
        printf("Number 1: %d", a); //prints the value of a |%d prints a as int|
        printf(" is greater than Number 2: %d", b); // prints the rest of the stuff together
    }
    else{
        printf("Number 2: %d", b);
        printf(" is greater than Number 1: %d", a);
    }


    return 0;
}
