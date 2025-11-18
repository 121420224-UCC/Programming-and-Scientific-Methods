#include <stdio.h>
// Checks if a matrix is a magic square.
// A magic square is an n-sided matrix whose sum of values for each
// row, column, main and secondary diagonals equals to n(n^2 + 1)/2.
// The function takes as input a matrix 'square' and its side length 'n'
// and outputs 0 if 'n' is negative or 'square' is NOT a magic square;
// otherwise, outputs a non-zero value
//


int isMagicSquare(int ** square, const int n) {

    // Eliminate the case where 'n' is negative
    if(n < 0) {
        return 0;
    }

    // M is the sum of every row, column,
    // and the main and secondary diagonals
    int M = (n * (n*n + 1))/2;

    int i, j;
    int sum1 = 0;
    int sum2 = 0;
    int test[2*n+2];

    // TODO: Checking that every row and column add up to M
    //
    // Checking Rows and Main diagonal First


   for (int i=0; i<n; i++){
       for (int j=0; j<n; j++){
            sum1 += square[i][j]; //summing over all rows
            if (i ==j)
                sum2 += square[i][j]; //summing over main diagonal
       }
       if (sum1 == M) //testing if rows are 'perfect'
           test[i] = 1; //true
       else
           test[i] = 0; //false
       sum1 = 0;
   }
   if (sum2 == M) //testing if main diagonal is 'perfect'
       test[2*n] = 3; //true
   else
       test[2*n] = 0; //false


   //Checking Columns and Secondary diagonal second
    sum2 = 0;
   for (int i=0; i<n; i++){
       for (int j=0; j<n; j++){
            sum1 += square[j][i]; //summing over all columns
            if (i+j == n-1)
                sum2 += square[i][j]; //summing over secondary diagonal
       }
       if (sum1 == M) //testing if columns are 'perfect'
           test[n+i] = 2; //true
       else
           test[n+i] = 0; //false
       sum1 = 0;
   }

    if (sum2 == M) //testing if secondary diagonal is 'perfect'
        test[2*n+1] = 4; //true
    else
        test[2*n+1] = 0; //false

    // TODO: Checking that the main and secondary
    // diagonals each add up to M
    // If passed all checks, it is a magic square

    for (int i=0; i<2*n+2; i++)
        printf("%d ", test[i]);

    printf("\n");

    for (int i=0; i<2*n+2; i++)
        if (test[i] ==0){
            printf("square is not magic :(\n");
            return 0;
        }

    printf("square is MAGIC!!\n");
    return 1;
}

