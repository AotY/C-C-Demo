/*
As you understood pointer is an address which is a numeric value ;
therefore , you can perform arithmetic operations on a pointer
just as you can a numeric value . There are four arithmetic operator 
that can be used on pointers :

	++ 
	--
	+
	-

To undestand pointer arthmetic , let us consider that ptr is 
an integer pointer which points to the address 1000 , assuming 
32-bit integers , let us perfrom the following arithmetic operation on
the pointer:
	ptr ++;  -- the ptr will point to the location 10004 because 
	each time ptr is incremented , it will point to the next integer .
	This operation will move the pointer to next memory locatoin without
	impacting actual value at the memory location.



*/

#include <iostream>

using namespace std;


const int MAX  = 3;
int main(int argc, char const *argv[])
{
	/* code */
	int var[MAX] = {10 ,100 ,1000};
	int *ptr;
	ptr = var ;
	int i;
	for( i = 0  ; i < MAX ; i ++)
	{
		//printf("address : %x\n", ptr);
		cout<<"address :" <<ptr<<endl;

		//printf("Value : %d\n", *ptr);
		cout<<"value: "<<*ptr<<endl;

		ptr ++ ;
	}

	return 0;
}