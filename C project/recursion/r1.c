#include <stdio.h>

int factorial(unsigned int i)
{
	if( i == 1 || i == 0)
	{
		return 1;
	}

	return factorial(i - 1) * i;
}

int main(int argc, char const *argv[])
{
	/* code */
	printf("%d\n", factorial(6));
	return 0;
}