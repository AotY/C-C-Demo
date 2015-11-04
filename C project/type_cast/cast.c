#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int sum = 17  , count = 5;
	double mean ;
	float mean2 ;
	mean = (double)sum / count ;
	mean2 = sum / count ;
	printf("Value of mean : %lf\n", mean);
	printf("Value of mean2 : %f\n", mean2);
	return 0;

}