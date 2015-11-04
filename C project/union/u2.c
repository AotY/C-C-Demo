#include <stdio.h>
#include <string.h>

union Data
{
	int i ;
	float f ;
	char str[20];
};

int main()
{
	union Data data;
	printf("Memory size occupied by Data :%d\n", sizeof(data));
	printf("data %x\n", &data );

	data.i = 10;
	data.f = 0.01;
	//str = "Hello";
	strcpy(data.str , "Hello");

	printf("%x\n", &data.i );
	printf("i : %d\n", data.i);

	printf("%x\n", &data.f );
	printf("f : %f\n", data.f);

	printf("%x\n", &data.str );
	printf("str : %s\n", data.str);

	return 0;
}
//Now , I believe that they are located into the same location.