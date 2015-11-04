#include <stdio.h>

int count ;
extern int write_extern(int);

void main()
{
	count = 5 ;
	int result = write_extern(count);
	printf("%d\n", result);
}