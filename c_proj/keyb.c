#include <stdio.h>

int main(){


    printf("Input words");
    char dummy, curr, prev;

    scanf("%c", &dummy);

    scanf("&c", &curr);
    while(curr!='"'){
        prev = curr;
        scanf("&c", &curr);
        if (prev<97){
            prev=prev+26;
        }
        if (prev==97){
            if (curr-prev==3){
                printf("OK");
            }
            else if (curr-prev==6){}
            else if (curr-prev==7){}
            else if (curr-prev==9){}
            else if (curr-prev==11){}
            else if (curr-prev==12){}
            else if (curr-prev==13){}
            else if (curr-prev==5){}
            else{
                printf("Nope");
                break;
            }
        }
    }
}
