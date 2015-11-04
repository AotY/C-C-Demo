//check if there is any argument supplied from the command line and
//take accordingly:
#include <stdio.h>
int main(int argc, char const *argv[])
{
	//argc -- argument number 
	//argv - a pointer array which points to each argument passed to the program

	if(argc == 2)
	{
		printf("The argument supplied is : %s  , %s\n", argv[0] , argv[1]);

	}
	else if(argc > 2)
	{
		printf(" Too many argument supplied .\n");
	}
	else
	{
		printf("One argument expected .\n");
	}
	/* code */
	return 0;
}
