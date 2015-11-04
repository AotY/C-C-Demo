#include <stdio.h>

extern int count ;

int write_extern(int var)
{
	printf("%d\n", var);

	count ++ ;
	return count;

}