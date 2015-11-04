#include <stdio.h>

int fibonacci(unsigned int num)
{
	if( num == 1)
	{
		return 1;
	}
	else if(num == 0)
	{
		return 0;
	}
	return fibonacci(num - 1) + fibonacci(num - 2);
}

int main(int argc, char const *argv[])
{
	/* code */
	int i ;
	for(i = 0 ; i <= 20 ; i ++)
	{
		printf("%d ", fibonacci(i)) ;
	}
	return 0;
}