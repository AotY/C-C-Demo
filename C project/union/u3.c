#include <stdio.h>
#include <string.h>
 
union Data
{
   int i;
   float f;
   char  str[20];
};

int main(int argc, char const *argv[])
{
	/* code */
	union Data data;
	data.i = 10;
	printf("%d\n", data.i );

	data.f = 100.0;
	printf("%f\n", data.f );

	strcpy(data.str , "Hello");
	printf("%s\n", data.str );
	return 0;
}