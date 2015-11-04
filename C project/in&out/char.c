#include <stdio.h>
int main(int argc, char const *argv[])
{
	  int c;

   printf( "Enter a value :");
   c = getchar( );
   printf("%d\n", c);

   printf( "\nYou entered: ");
   putchar( c );

   return 0;
}