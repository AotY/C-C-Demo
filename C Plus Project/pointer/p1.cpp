#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	char *c = NULL;

	if(c)
	{
		//printf("c is not NULL .\n");
		std::cout << "c is not NULL"<<endl;
	}
	else
	{
		//printf("c is NULL .\n");
		std::cout << "c is  NULL"<<endl;
	}

	return 0;
}