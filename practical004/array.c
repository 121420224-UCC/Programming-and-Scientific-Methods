#include <stdio.h>
#include <math.h>
#include <string.h>

float pi = M_PI;
float array[13];

float DegToRad (float x)
{
	return (pi*x/180.0);
}

float Area_trap (float a, float b, int N)
{
	//Converting degree inputs -> radian
	float a_rad = DegToRad(a);
	float b_rad = DegToRad(b);
	//Calculating initial area + defining delta_N
	float area = tan(a_rad) + tan(b_rad);
	float delta_N = (b-a)/(1.0*N);
	printf("Delta N = %f\n", delta_N);

	//Calculate 2*(f(x1) + f(x2) + .... f(x11))
	for (int i=1; i<N; i++){
		area = area + 2*tan(DegToRad(i*delta_N));
		printf("New area at x(%f) = %f\n", i*delta_N, area);
	}

	//Multiply the area by (pi/3)/2*12
	area = (M_PI*((b-a)/(2*N)))/180.0 * area;

	//Approximated result
	printf("\nTrapezodial result: %f\n", area);

	//Actual Result
	printf("Real result: %f\n", log(2));


}


int main(void) {
	
	//Declaring variables
	float deg;
	float rad;

	//For loop
	for (int i=0; i<=12; i++){
		deg = i * 5.0;
		rad = DegToRad(deg);
		array[i] = tan(rad);
		printf("Deg: %.3f || Rad: %.3f || Array entry %.3d: %f\n",deg,rad, i,array[i]);
	}

	Area_trap(0,60,12);

	return 0;
}
