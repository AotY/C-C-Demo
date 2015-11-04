#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	/* code */
	char greeting[6] = {'H' , 'e' , 'l' , 'l' , 'o','\0'};
	char *g = "Hello";
	printf("%s\n", greeting);
	printf("%d\n", strlen(greeting));

	printf("%s\n", g);
	printf("%d\n", strlen(greeting));
	return 0;
}