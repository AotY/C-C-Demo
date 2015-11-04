#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	int var1 ;
	char var2[10];

	printf("address of var1 : %x\n", &var1);
	printf("address of var2 : %x\n", &var2);
	return 0;
}