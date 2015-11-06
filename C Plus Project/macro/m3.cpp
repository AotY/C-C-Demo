#include <iostream>
using namespace std;

#define MKSTR(x) #x

int main(int argc, char const *argv[])
{
	/* code */
	cout << MKSTR(hello c++)<<endl;
	return 0;
}