#include <stdio.h>

/*

Note: you need to put a space when you input each number.
Ex. 1 2 4 3 (ok)
    1234(wrong)

another one:
DO THIS:
1 4 6 7
2 6 8 3
5 7 2 1
3 6 2 1
not this:
1467
2683
5721
3621

Input sample.
Number of columns: 4
Number of rows: 4
Input: 0 0 0 0
0 1 1 1
0 1 0 0
1 0 1 1
Expected Output:
Row 0: 2 pairs
Row 1: 1 pairs
Row 2: 1 pairs
Row 3: 1 pairs

*/
int main(){
	//initialize row and column variables
    int rows, columns;

    printf("No. of rows: ");
    scanf("%d", &rows);
    printf("No. of columns: ");
    scanf("%d", &columns);

	//initialize the 2D array of length |rows| and width |columns|
    int array[rows][columns];

    printf("Input: ");
	//yeh thats how you input integer arrays. spaces to input separate numbers. (1 3 2)
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            scanf("%d", &array[i][j]);
        }
    }

	/*
	supposed to be 67 hehe, but changed to negative
    Assuming all inputs are positive, this will make it so that any pairs found will have their values changed.
	*/
	int gen_alpha = -1;

    for(int i=0; i<rows; i++){
        int pairs = 0;
		/*
		2 for loops for pointers 1 and 2. Pointer 1 is in position n starting at 0,
		and pointer 2 is in position n+1 to speed up process.
        */
		for(int p1=0; p1<columns; p1++){
            for(int p2=p1+1; p2<columns; p2++){
					/*
					Debug: Prints where pointer 1 and 2 is, and their values.
                    printf("P1: %d, value: %d\n", p1, array[i][p1]);
                    printf("P2: %d, value: %d\n", p2, array[i][p2]);
					*/
				//if there is a pair, change the pair numbers to negative and add 1 to pairs
                if (array[i][p1] == array[i][p2]){
					//Value change to negative number
                    array[i][p1] = gen_alpha;
                    array[i][p2] = gen_alpha;
					//Update to negative number to avoid repeats.
                    gen_alpha--;
                    pairs = pairs + 1;
                    break;
                }
            }
        }
		//Shows row number and pairs. Resets to 0 for each row.
        printf("Row %d: ", i);
        printf("%d pairs \n", pairs);
    }



}


