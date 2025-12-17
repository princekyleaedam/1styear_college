#include <stdio.h>

/*

I'm using an integer array instead of a character array

Recommended Input:
No. of rows: 5
No. of columns: 5
Inputs:
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
1 1 1 1 1
Largest square: 5x5

Input numbers with spaces.

*/


int main(){

    int rows, columns;


    //You know what it is, number of rows and columns inputted.
    printf("No. of rows: ");
    scanf("%d", &rows);
    printf("No. of columns: ");
    scanf("%d", &columns);

    printf("Inputs: \n");

    //initialize array of size [rows][columns]
    int array[rows][columns];

    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            scanf("%d", &array[i][j]);
        }
    }


    /*
    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            printf("%d", array[i][j]);
        }
    }
    */

    //square check

    /*

    First, we set the largest square value to be 1, and set the maximum possible square
    size to be either length or width, whichever is smaller.
    */

    int largest_square = 1;
    int max_possible_size;

    if (rows<columns){
        max_possible_size = rows;
    }
    else{
        max_possible_size = columns;
    }


    /*

    There are 5 for loops nested in each other.
    1. size. The size starts at 2, and increases up to the maximum size+1.
    2. p1. The starting x position of the square to be scanned.
    3. p2. The starting y position of the square to be scanned.
    4. i. It starts scanning from p1 to the current size+p1.
    5. j. It starts scanning from p2 to the current size+p2.

    3 variables are used.
    is_square: Checks whether the scanned area is a square.
    largest_square: The value of the largest possible square.
    originum: The top-left corner of the scanned area.

    */

    int topleft_x, topleft_y;
    for (int size=2; size<max_possible_size+1; size++){
        for (int p1=0; p1<rows-size+1; p1++){
            for (int p2=0; p2<columns-size+1; p2++){
                int is_square = 1;
                int originum = array[p1][p2];
                /*
                Debug:
                printf("Originum %d\n", originum);
                printf("Size %d\n", size);
                */
                for (int i=p1; i<p1+size; i++){
                    for (int j=p2; j<p2+size; j++){
                        if(array[i][j] != originum){
                            is_square = 0;
                            break;
                        }
                    }
                }
                //Extra stuff, shows the x and y coordinate of where the square is located.
                if (is_square == 1){
                    topleft_y = p1 +1;
                    topleft_x = p2 +1;
                    largest_square = size;
                }
            }
        }
    }



    printf("Largest square: %dx%d\n", largest_square, largest_square);
    printf("Starting top left corner: %d, %d", topleft_x, topleft_y);
}
