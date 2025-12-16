#include <stdio.h> //user input

int main(){
    char the_operator;//initializes the_operator
    int a, b, output;

    printf("Number 1: ");
    scanf("%d", &a);
    printf("Number 2: ");
    scanf("%d", &b);
    printf("Operator: ");
    scanf("%c", &the_operator);

    switch (the_operator){
    case '+':
        output = a+b;
        printf("Output: %d", output);
        break;
    case '-':
        output = a-b;
        printf("Output: %d", output);
        break;
    case '*':
        output = a*b;
        printf("Output: %d", output);
        break;
    case '/':
        output = a/b;
        printf("Output: %d", output);
        break;
    case '%':
        output = a%b;
        printf("Output: %d", output);
        break;
    default:
        printf("Wrong operator lol");
    }
    return 0;
}

