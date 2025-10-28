#include <stdio.h>
#include <math.h>

float arctanh1(float x, float delta){ //where |x| < 1

    float sum =0; float element;
    int n =0;

    do{
        element = (pow(x, 2*n+1))/(2*n+1);
        sum += element;
        n++;
    } while (fabs(element) >= delta);

    return sum;
}

float arctanh2(float x){ //where |x| <1

    return 1.0/2.0 * (log(1.0+x) - log(1.0-x));
}

int main(void){

	float delta;
	printf("Enter your value for delta: ");
	scanf("%f", &delta);
    printf("delta value is %f\n",delta);

    printf("Archtanh1 = %f \n", arctanh1(0.2,delta)); 
    printf("Archtanh2 = %f \n", arctanh2(0.2));
   
    double delta_x = 0.1;
    double range = 1.8;
    int  max = range/delta_x;
    double x = -0.9;

    double array1[max];
    double array2[max];

    for (int i=0; i<max; i++){
        array1[i] = arctanh1(x,delta);
        //printf("arctanh1(%4.1f) = %f\n", x, array1[i]);
        array2[i] = arctanh2(x); 
        //printf("arctanh2(%4.1f) = %f\n", x, array2[i]);
        x = x + delta_x;
        printf("Difference = %.5f at %.1f\n", fabs(array1[i]-array2[i]), x);
    }

    


    return 0;
}

