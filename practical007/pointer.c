#include <stdio.h>
#include <stdlib.h>

int *allocatearray(int n){

    int *pd = (int *) malloc(n * sizeof(int));

    return pd;
}

int fillwithones(int *pd, int n){

    for (int i=0; i<n; i++){
        pd[i] = i;
    }
}

void printarray(int *pd, int n){

    for (int i=0; i<n; i++)
        printf("%d\n", pd[i]);
}

void freememory(int *pd){
    free(pd);
}


int main(){

    int n = 7;
    int *p = allocatearray(n);
    fillwithones(p,n);
    printarray(p,n);
    freememory(p);

   p = NULL;

    return 0;
}
