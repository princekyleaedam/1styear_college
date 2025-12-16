#include <stdio.h>

int main(){

    int columnNumber;

    int letters =0;

    printf("Input a columnnumber:" );

    scanf("%d", &columnNumber);

    int a = columnNumber;

    while(a > 0){
        a = a - 1;
        a = a / 26;
        letters = letters + 1;
    }
    char columnLetter[letters];
    a = columnNumber;
    for(int i = 0; i<letters; i=i+1){
        a = a - 1;
        int letterNum = a % 26;
        a = a / 26;
            if (letterNum == 0){
                columnLetter[i] = 'a';}
            else if (letterNum == 1){
                columnLetter[i] = 'b';}
            else if (letterNum == 2){
                columnLetter[i] = 'c';}
            else if (letterNum == 3){
                columnLetter[i] = 'd';}
            else if (letterNum == 4){
                columnLetter[i] = 'e';}
            else if (letterNum == 5){
                columnLetter[i] = 'f';}
            else if (letterNum == 6){
                columnLetter[i] = 'g';}
            else if (letterNum == 7){
                columnLetter[i] = 'h';}
            else if (letterNum == 8){
                columnLetter[i] = 'i';}
            else if (letterNum == 9){
                columnLetter[i] = 'j';}
            else if (letterNum == 10){
                columnLetter[i] = 'k';}
            else if (letterNum == 11){
                columnLetter[i] = 'l';}
            else if (letterNum == 12){
                columnLetter[i] = 'm';}
            else if (letterNum == 13){
                columnLetter[i] = 'n';}
            else if (letterNum == 14){
                columnLetter[i] = 'o';}
            else if (letterNum == 15){
                columnLetter[i] = 'p';}
            else if (letterNum == 16){
                columnLetter[i] = 'q';}
            else if (letterNum == 17){
                columnLetter[i] = 'z';}
            else if (letterNum == 18){
                columnLetter[i] = 's';}
            else if (letterNum == 19){
                columnLetter[i] = 't';}
            else if (letterNum == 20){
                columnLetter[i] = 'u';}
            else if (letterNum == 21){
                columnLetter[i] = 'v';}
            else if (letterNum == 22){
                columnLetter[i] = 'w';}
            else if (letterNum == 23){
                columnLetter[i] = 'x';}
            else if (letterNum == 24){
                columnLetter[i] = 'y';}
            else if (letterNum == 25){
                columnLetter[i] = 'z';}

    }

    printf("Output: ");
    for(int i=letters-1; i>-1; i=i-1){
        printf("%c", columnLetter[i]);
    }

}
