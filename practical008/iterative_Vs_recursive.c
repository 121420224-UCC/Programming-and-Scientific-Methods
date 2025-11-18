#include <stdio.h>
#include <math.h>

int gcd_it (int a, int b){
    
    while (b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}


int gcd_rec (int a, int b){

    if (b==0)
        return a;
    else
        return gcd_rec(b, a%b);
}



int main() {

    printf("Iterative: %d\n", gcd_it(12,8));

    printf("Recursive: %d\n", gcd_rec(12,8));

    return 0;
}
