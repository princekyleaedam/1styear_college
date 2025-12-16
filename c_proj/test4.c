#include <stdio.h> //predefined input

int main(){
    int a=10;
    int b=5;
    int output;
    char operation='*';
    switch (operation){
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
    default:
        printf("wrong operator lol");
        break;
    }
    return 0;

}
