#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	int var = 20;
	int *ip;

	ip = &var;
	printf("var : %x\n", &var);
	printf("ip  : %x\n", ip);

	printf("value of ip %d\n", *ip);

	*ip = 10;

	printf("var %d\n", var);
	return 0;
}