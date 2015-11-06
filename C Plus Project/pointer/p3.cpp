#include <iostream>
using namespace std;

const int MAX = 3 ;

int main(int argc, char const *argv[])
{
	/* code */
	int var[MAX] = {10 , 200 , 3000};
	int *ptr = var;

	while(ptr < &var[MAX])
	{
		cout<<"Address : "<<ptr<<endl;
		cout<<"value : "<<*ptr<<endl;

		ptr ++ ;
	}
	return 0;
}