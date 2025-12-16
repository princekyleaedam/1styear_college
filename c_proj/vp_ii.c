#include <stdio.h>

int main(){

    int lettercount = 0;
    char l, a, dummy;
    printf("Input: ");

    scanf("%c", &dummy);
    int letters[lettercount];

    while(a!='"'){
        scanf("%c", &a);
        printf("%c", a);
        lettercount = lettercount + 1;
        printf("%d", lettercount);
        letters[lettercount-1] = a;
    }

    for(int i=0; i<lettercount; i++){
        printf(letters[lettercount]);
    }
}



