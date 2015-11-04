#include <stdio.h>
#include <stdarg.h>

double average(int num , ...)
{
	va_list valist ;
	double sum = 0.0;

	int i ;
	//initialize valist for num number of arguments
	va_start(valist , num);

	for( i = 0 ; i < num ; i ++)
	{
		sum += va_arg(valist , int);
	}

	//clean memory reserved for valist
	va_end(valist);

	return (double)sum/num;
}

int main(int argc, char const *argv[])
{
	/* code */
	printf("average of 2 , 4 ,5 ,6 : %f\n", average(4 , 2 , 4 , 5 ,6));
	printf("average of 2 , 4 ,5 , : %f\n", average(3 , 2 , 4 , 5 ));
	return 0;
}