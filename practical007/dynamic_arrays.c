#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double factorial(double x){
    double sum = 1.0;

    for (int i=0; i<x; i++){
        sum = sum * (x-i);
    }
    return sum;
}

double function(int n){

    double *pd = (double *) malloc(n * sizeof(double));


    for (int i=1; i<=n; i++){
        pd[i-1] = 1/factorial(i);
    }

    double sum = 0.0;

    for (int i=0; i<n; i++){
       sum += pd[i];
    }

    return sum + 1;
}


int main(){

    for (int i=0; i<15; i++){
        printf("Estimate of e to %d degree: %.14lf\n",i+1, function(i+1));
        printf("With a difference of %.14lf\n", fabs(function(i+1)-exp(1.0)));
    }

    return 0;
}
