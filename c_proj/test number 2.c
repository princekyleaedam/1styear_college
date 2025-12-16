#include <stdio.h>

394

int main(){
    int number, no_of_digits, rem, ref, temp, new_number, smallest, j;


    printf("input number: ");
    scanf("%d", &number);

    temp = number;

    while (temp>0){
        temp = temp / 10;
        no_of_digits = no_of_digits + 1;
    }
    new_number = 0;

    for(int i = 0; i<no_of_digits;i=i+1){
        new_number = new_number * 10;
        int smallest = 10;
        temp = number;
        for(int j = 0; j<no_of_digits;j=j+1){
            int current_digit = temp % 10;
            if (current_digit == 0){
                //do nothing
            }
            else if(current_digit < smallest){
                smallest = current_digit;
                int smallest_position = j;
            }
            else{
                //do nothing
            }
            temp = temp/10;
        }
        new_number
    }



    printf("%d", new_number);


}
