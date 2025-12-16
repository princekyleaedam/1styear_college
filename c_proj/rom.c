#include <stdio.h>

int main(){

    int rom, i;
    char a;

    printf("Input roman:");

    while (1>0){
        scanf("%c", &a);
        if (a=='"'){
            break;
        }
    }

    char prev = ' ';
    char curr;
    while (1>0){
        scanf("%c", &curr);
        if(curr == 'M'){
            if(prev == 'M'){
                rom = rom + 1000;
            }
            if(prev == ' '){
                rom = rom + 1000;
            }
            if(prev == 'C'){
                rom = rom + 800;
            }
        }
        if(curr == 'D'){
            if(prev == 'M'){
                rom = rom + 500;
            }
            if(prev == ' '){
                rom = rom + 500;
            }
            if(prev == 'C'){
                rom = rom + 300;
            }
        }
        if(curr == 'C'){
            if(prev == 'D'){
                rom = rom + 100;
            }
            if(prev == ' '){
                rom = rom + 100;
            }
            if(prev == 'M'){
                rom = rom + 100;
            }
            if(prev == 'X'){
                rom = rom + 80;
            }
            if(prev == 'C'){
                rom = rom + 100;
            }
        }
        if(curr == 'L'){
            if(prev == 'D'){
                rom = rom + 50;
            }
            if(prev == ' '){
                rom = rom + 50;
            }
            if(prev == 'M'){
                rom = rom + 50;
            }
            if(prev == 'X'){
                rom = rom + 30;
            }
            if(prev == 'C'){
                rom = rom + 50;
            }
            if(prev == 'L'){
                rom = rom + 50;
            }
        }
        if(curr == 'X'){
            if(prev == 'D'){
                rom = rom + 10;
            }
            if(prev == ' '){
                rom = rom + 10;
            }
            if(prev == 'M'){
                rom = rom + 10;
            }
            if(prev == 'X'){
                rom = rom + 10;
            }
            if(prev == 'C'){
                rom = rom + 10;
            }
            if(prev == 'L'){
                rom = rom + 10;
            }
            if(prev == 'I'){
                rom = rom + 8;
            }
        }
        if(curr == 'V'){
            if(prev == 'I'){
                rom = rom + 3;
            }
            else{
                rom = rom + 5;
            }
        }
        if (curr=='I'){
            rom = rom + 1;
        }
        if (curr=='"'){
            break;
        }
    }



}
