/*returning values by reference in c++
when a function returens a refrence , it returns an implicit
pointer to its return value. This way , a function can be used on 
the left side of an assigment statement.
*/
#include <iostream>
#include <ctime>

using namespace std;

double vals[] = {10.1 , 12.5 , 23.1 , 50.0,0.01};

double& getValues(int i )
{
	return vals[i];
}

//main function to call above defined function
int main(int argc, char const *argv[])
{
	/* code */
	cout <<"value befor changed "<<endl;
	for (int i = 0; i < 5; ++i)
	{
		cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
		
	}
	getValues(0) = 20.0;
	getValues(1) = 30.0;

	cout << "Value after change" << endl;
	for ( int i = 0; i < 5; i++ )
	{
	   cout << "vals[" << i << "] = ";
	   cout << vals[i] << endl;
	}
	return 0;
}
/*
when returning a reference , be careful that the object being
referred to does not go out of scope . so it is not legal to return a refrence to 
local var.But you can always return a reference on a static variable.
int& func() {
   int q;
   //! return q; // Compile time error
   static int x;
   return x;     // Safe, x lives outside this scope
}
*/