#include <iostream>
using namespace std;

#define concat(a , b) a ## b
int main(int argc, char const *argv[])
{
	/* code */
	int xy = 100;
	//cout<<x<<endl;
	cout << concat(x , y );
	// === count<<xy;
	return 0;
}