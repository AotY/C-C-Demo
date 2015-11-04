#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	/* code */
	char name[100];
	char *description;

	strcpy(name , "Zara Ali");

	//allocate memory dynamically
	description = malloc(200 * sizeof(char));
	
	if(description == NULL)
	{
		fprintf(stderr, "Error - unable to allocate required memory .\n");
	}
	else
	{
		strcpy(description , "Zara  ali a DPS student in class 10th");
	}

	printf("Size of description : %d\n", sizeof(description));


	description = realloc(description , 500 * sizeof(char));
	strcat(description , " Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World  Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World Hello World");
	printf("Size of description : %d\n", sizeof(description));
	
	printf("%s\n", name);
	printf("%s\n", description);

	return 0;
}	
//sizeof(description) is only the size of description . 