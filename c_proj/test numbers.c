#include <stdio.h>

int main(){
    int number, new_number, rem, b;

    printf("input number: ");
    scanf("%d", &number);
    new_number = 0;
    while (number > 0){
        new_number = new_number * 10;
        rem = number % 10;
        number = number / 10;
        new_number = new_number + rem;
    }

    printf("%d", new_number);


}
