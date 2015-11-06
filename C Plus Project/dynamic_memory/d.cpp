/*
1 ; The stack  -  All varibale delcared inside the
function will take ip memory from the stack.

2; The heap    -  This is unused memory of the program
and can be used to allocate the memory dynamically when program runs.

*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */

	double *pvalue = NULL;

	pvalue = new double;

	*pvalue = 2.34;

	cout<<"pvalue === " <<*pvalue <<endl;
	return 0;
}