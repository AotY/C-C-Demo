#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	/* code */
	char str1[12] = "Hello";
	char str2[12] = " World";
	char str3[12];
	int len ;
	/*copy str1	into str2*/
	printf("%s\n", strcpy(str3 , str1) );

	printf("%s\n", strcat(str1 , str2));

	printf("%d\n", strlen(str1));

	printf("%d\n", strcmp(str1 , str2));

	printf("%s\n", strchr(str1 , 'o'));
	return 0;
}