#include <stdio.h>

int main(){
    //initializes 3 integers
    int a, b, c;

    //prints and allows user to input 3 numbers, one each line.
    printf("Input first number");
    scanf("%d", &a);
    printf("Input second number");
    scanf("%d", &b);
    printf("Input third number");
    scanf("%d", &c);

    if (a>b){
        if (b>c){
            printf("Numbers in order:%d, %d, %d,", a, b, c);
        }
    }

}
