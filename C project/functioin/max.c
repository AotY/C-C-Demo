#include <stdio.h>

/*function declartion*/
int main()
{
	/*local variable definition*/
	int a = 100;
	int b = 200;

	int ret ;

	/*calling a function to get max value*/
	ret = max(a , b);

	printf("Max value is : %d\n" , ret);

	printf("address of a : %d\n", &a);
	printf("address of b : %d\n", &b);
	return 0;
}

int max(int a , int b )
{
	printf("address of a : %d\n", &a);	
	printf("address of b : %d\n", &b);
	if(a > b)
	{
		return a ;
	}
	else
	{
		return b ;
	}
};