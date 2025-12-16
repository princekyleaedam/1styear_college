#include <stdio.h>

int main(){
    int columns, rows;

    printf("Number of columns: ");
    scanf("%d", &columns);
    printf("Number of rows: ");
    scanf("%d", &rows);

    int numbers[rows][columns];

    //input
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            scanf("%d", &numbers[i][j]);
        }
    }

    //output
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

}
