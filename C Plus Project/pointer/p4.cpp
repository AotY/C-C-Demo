#include <iostream>

using namespace std;

const int MAX = 3;
int main(int argc, char const *argv[])
{
	/* code */

	char *name[MAX] = {
		"AotY ",
		"QINGTAO",
		"Qtao"
	};
	for (int i = 0; i < MAX; ++i)
	{

		/* code */
		
		cout<<name[i]<<endl;
	}

	return 0;
}