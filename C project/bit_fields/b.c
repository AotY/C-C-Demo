#include <stdio.h>
#include <string.h>

struct 
{
	unsigned int var1  ;
	unsigned int var2  ;
}status1;

struct 
{
	unsigned int var1 : 1 ;
	unsigned int var2 : 1 ;
}status2;

int main( )
{
   printf( "Memory size occupied by status1 : %d\n", sizeof(status1));
   printf( "Memory size occupied by status2 : %d\n", sizeof(status2));

   return 0;
}
/*
Memory size occupied by status1 : 8
Memory size occupied by status2 : 4

*/