/*The register storage class is used to define local variables
that should be stored in a register instead of RAM*/

#include <stdio.h>
int main()
{

	register int miles ;
	//printf("%p\n", &miles);
	printf("%d\n", sizeof(miles));


	/* code */
	return 0;
}