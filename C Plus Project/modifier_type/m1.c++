#include <iostream>
using namespace std;
/*
	signed - (有符号)
	unsigned - (无符号)
	long - ()
	short - ()

*/
/*
	This program shows the difference between signed and unsigned integers.
*/
int main(int argc, char const *argv[])
{
	/* code */
 
	short int i ;  // short signed  int 
	short unsigned int j ; // short unsigned int 

	j = 50000;

	i = j ;

	cout << i << "  ,  "  << j <<endl;

	cout<<&i << "  ,  "  << &j << endl;

	cout<< sizeof(i)<<"  , " << sizeof(j) <<endl;

	return 0;
}