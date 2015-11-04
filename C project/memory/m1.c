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

	printf("%s\n", name);
	printf("%s\n", description);

	return 0;
}	