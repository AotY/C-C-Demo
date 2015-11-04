#include <stdio.h>
int main(int argc, char const *argv[])
{
	/* code */
	int * ptr = NULL;
	printf("address : %x\n", ptr);

	//printf("value : %d\n", *ptr); //Segmentation fault
	return 0;
}
/*
1 . C - pointer arithmetic
2 . C - array of pointers
3 . pointer to pointer
4 . passing pointers to functioin in c
5 . return pointer from functions in c
*/