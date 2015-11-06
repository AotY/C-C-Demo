/*
A reference variable is an alias , that is , another name for an 
already existing variable . Once a reference is initialize with
a variable , either the variable name or the reference name mayy 
be used to refer to the variabl

---c++ reference VS Pointers
Reference are often confused with pointers but three major
differences between references andd pointers are:

1 ; You cannot have NULL references , you must always be able 
to assume that a reference is connected to a legitimate piece 
of storage.

2 ; Once a reference is initalized to an object , it cannot 
be changed to refer to another object . Pointers can be
pointed to another object at any time.

3;A reference must be initalized when it is created .
pointers can be initalized at any time.


*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int i = 17 ;
	int& r = i;

	cout << " address of i : "<<&i<<endl;
	cout << " value of i : "<<i<<endl;

	i = 10;

	cout << " address of r : "<<&r<<endl;
	cout << " value of r : "<<r<<endl;

	return 0;
}
//the address of r and i is same .