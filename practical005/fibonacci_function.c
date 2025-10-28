#include <stdio.h>
#include <math.h>

int array[10000];

void function(int *fn1, int *fn2)//fn1 -> F_{N-1} && fn2 -> F_{N-2}
{
	int fn = *fn1 + *fn2;
	*fn2 = *fn1;
	*fn1 = fn;
}

int main(void)
{
	int fn1,fn2, N;
	int max_n;

	//User inputs value for n
	printf("Input your value of n: ");
	scanf("%d", &max_n); 	
	
	for(N=0;N<=max_n;N++){
		if(N<2){
			fn1=1;
			fn2=0;
			array[0] = fn2;
			array[1] = fn1;
		}
	
		else{
			array[N] = fn1+fn2;
			function(&fn1,&fn2);
		}
	}


	printf("The fibonacci series up to n=%d is: \n",max_n); 
	for(N=0; N<=max_n; N++)
	{
        printf("%d, ", array[N]);
	}

	
	return 0;
}

