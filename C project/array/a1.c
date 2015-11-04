#include <stdio.h>

int main()
{
	int n[10] ; //n is an array of 10 integers
	int i , j;
	/*initialize elements of array n to 0*/
	for ( i = 0 ; i < 10 ; i++)
	{
		n[i] = i + 100 ; 
	}

	for ( j = 0 ; j < 10 ; j ++)
	{
		printf("Element[%d] = %d\n", j , n[j]);
	}
	return 0;
}
/*
1.  Multi-dimensional arrays
2.  Passing arrays to functions
3.  Return array from a function
4. 	Pointer to an array
	
*/