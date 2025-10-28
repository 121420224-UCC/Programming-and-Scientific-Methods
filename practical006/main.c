#include<stdio.h>
#include<math.h>


//function for printing out matrices
void printMatrix(int rows, int cols, double  arr[][cols]){
    for (int i=0;i<rows;i++){
        for (int j=0; j<cols; j++){
            printf("|%3.0f ", arr[i][j]);
        }
        printf("| ");
        printf("\n");
    }
}

//Matrix function
void matmult (int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);



int main(){

    int n=5;
    int p=3;
    int q=4;
    
    double A[n][p];
    double B[p][q];
    double C[n][q];

    int i,j,k;
    //Initialising matrix C (n x q) and A (n x p)
    for (i=0;i<n;i++){
        for(j=0;j<q;j++){
            C[i][j]=0;
        }
        for(j=0;j<p;j++){
            A[i][j] = i + j;
        }
    }

    //Initialising matrix B (p x q)
    for (i=0;i<p;i++){
        for(j=0;j<q;j++){
            B[i][j]=i-j;
        }
    }

    printf("\nMatrix C\n");
    printMatrix(n,q,C);
    
    printf("\nMatrix A\n");
    printMatrix(n,p,A);

    printf("\nMatrix B\n");
    printMatrix(p,q,B);

    //Perform Matrix multiplicaton
    /*
    for(i=0; i<n;i++)
        for(j=0; j<q; j++)
            for(k=0; k<p; k++)
                C[i][j] = C[i][j] + A[i][k]*B[k][j];
    */
    matmult (n,p,q,A,B,C);


    printf("\nMatrix multiplication\n");
    printMatrix(n,q,C);

    return 0;
}

