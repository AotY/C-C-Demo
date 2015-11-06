
#include <iostream>
using namespace std;

void swap(int& a , int& b);

int main(int argc, char const *argv[])
{
	/* code */
	int a = 100 ;
	int b = 200 ; 
	cout << "a === " <<a << " , " << " b ===  "<<b <<endl;
	swap(a , b ) ; //swap the value of a from b 
	cout << "a === " <<a << " , " << " b ===  "<<b <<endl;
	return 0;
}

void swap(int& a , int& b)
{
	int temp = a ;
	a = b;
	b = temp;

	return ;	
}
//This is a useful place of reference