#include <stdio.h>

int checkduplicate(int number, int digits);

int checkduplicate(int number, int digits){
    int numberarray[digits];
    int numberbackup = number;
    int remainder;

    //load the digits to array
    for(int i = 0; i<digits; i++){
        remainder = numberbackup % 10;
        numberarray[i] = remainder;
        numberbackup = numberbackup / 10;
    }

    //check for similiarities
    for(int p1 = 0; p1<digits; p1++){
        for(int p2 = p1+1; p2<digits; p2++){
            if(numberarray[p1] == numberarray[p2]){
                return number;
            }
        }
    }

    return 0;
}
int checkdigits(int number, int digits);

int checkdigits(int number, int digits){
    int lowerlimit = 1;
    int higherlimit = 1;
    for(int i = 1; i<digits; i++){
        lowerlimit = lowerlimit * 10;
    }
    lowerlimit = lowerlimit - 1;

    for(int i = 0; i<digits; i++){
        higherlimit = higherlimit * 10;
    }

    //check if number is
    if (number > lowerlimit && number < higherlimit){
        int newnumber = checkduplicate(number, digits);
        return newnumber;
    }
    else{
        return NULL;
    }

}


int main(){
    int inputs, digits, number;

    printf("Number of inputs:");
    scanf("%d", &inputs);
    printf("Number of digits:");
    scanf("%d", &digits);

    int numbers[digits];

    printf("Inputs:");
    for(int i=0; i<inputs; i++){
        scanf("%d", &numbers[i]);
    }

    for(int i=0; i<inputs; i++){
        number = checkdigits(numbers[i], digits);
        if (number != 0){
            printf("%d ", number);
        }
    }


}
