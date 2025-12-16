#include <stdio.h>

int main(){

    int number_of_inputs, rem;

    printf("Number of inputs: ");
    scanf("%d", &number_of_inputs);

    int numbers[number_of_inputs];
    printf("Inputs: ");

    for(int i = 0; i<number_of_inputs; i=i+1){
        scanf("%d", &numbers[i]);
    }

    int digits[6];
    //Function for number checking.

    for(int i = 0; i<number_of_inputs; i=i+1){

        if (numbers[i] %2 == 0){
            //if number is even
            int new_number = 0;
            while (numbers[i] > 0){
                new_number = new_number * 10;
                rem = numbers[i] % 10;
                numbers[i] = numbers[i] / 10;
                new_number = new_number + rem;
            }
            numbers[i] = new_number;

        }
        else{
            //if number is odd

        }

    }

    for(int i = 0; i<number_of_inputs; i=i+1){
        printf("%d ", numbers[i]);
    }



}
