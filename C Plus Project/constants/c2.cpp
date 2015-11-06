#include <iostream>
using namespace std;

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main(int argc, char const *argv[])
{

	/*
	const int LENGTH = 10;
	const int WIDTH  = 5 ;
	const char NEWLINE = '\n'

	*/
	/* code */
	//printf("size of argc : %d\n", argc);
	cout<<"size of arc : "<<argc<<endl;
	int area   = LENGTH * WIDTH;
	cout << area;
	cout << NEWLINE ;


	return 0;
}