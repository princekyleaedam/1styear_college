#include <stdio.h>

int main(){

    int number_of_inputs;

    int oddfunction(int a);
    int evenfunction(int b);

    printf("Number of inputs: ");
    scanf("%d", &number_of_inputs);

    int numbers[number_of_inputs];
    printf("Inputs: ");

    for(int i = 0; i<number_of_inputs; i=i+1){
        scanf("%d", &numbers[i]);
    }


    for(int i = 0; i<number_of_inputs; i=i+1){

        if (numbers[i] %2 == 1){
            numbers[i] = oddfunction(numbers[i]);
        }
        else{
            numbers[i] = evenfunction(numbers[i]);
        }

    }

    for(int i = 0; i<number_of_inputs; i=i+1){
        printf("%d ", numbers[i]);
    }



}

int oddfunction(int a){
    int new_number = 0;
    while (a > 0){
        new_number = new_number * 10;
        int rem = a % 10;
        a = a / 10;
        new_number = new_number + rem;
    }
    return new_number;
}

int evenfunction(int a){
    int new_number = 0;
    int no_of_digits = 0;
    int test = a;

    //gets number of digits
    while (test > 0){
        test = test / 10;
        no_of_digits++;
    }

    //makes the array for digits to be sorted
    int digits[no_of_digits];

    for(int i = 0; i<no_of_digits; i++){
        int rem = a % 10;
        digits[i] = rem;
        a=a/10;
    }

    //Bubblesort
    for (int i = 0; i < no_of_digits - 1; i++) {
        for (int j = 0; j < no_of_digits - 1; j++) {
            if (digits[j] > digits[j + 1]) {
                int temp = digits[j];
                digits[j] = digits[j+1];
                digits[j+1] = temp;
            }
        }
    }

    //Makes new number
    for (int i=0; i<no_of_digits; i++){
        new_number = new_number * 10;
        new_number = new_number + digits[i];
    }


    return new_number;
}
