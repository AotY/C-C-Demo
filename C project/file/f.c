#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	FILE * fp ;
	fp = fopen("test.txt" , "w+");
	fprintf(fp, "This is testing for fprintf .. \n" );
	fputs("This is testing for fputs\n" , fp);
	char c[255];
	fgets(c , 255 , (FILE *)fp);
	printf("%s\n", c);
	int result = fclose(fp);
	printf("%d\n", result);
	//remenber  to  close I/O object
	return 0;
}