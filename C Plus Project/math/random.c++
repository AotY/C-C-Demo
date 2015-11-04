/*
There are many cases where you will wish to generate
a random number . There are actually two functions you will
need to know about random number generation . 
1 ; rand()  ---- this function will only return a pseudo random number .

2 ; srand() -- the way to fix that is to first call the srand() function.
*/


/*
	Following is a simple example to generate few random numbers.
	This example makes use of time() function to get the number of
	seconds on your system time , to randomly seed the rand() function:
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;	
int main(int argc, char const *argv[])
{
	/* code */
	int i , r ;
	//set the seed 
	srand((unsigned int ) time (NULL));

	//generate 10 random number 
	for ( i = 0  ; i < 10 ; i++)
	{
		r = rand();
		cout << "Random number : " << r<<endl;
	}
	return 0;
}