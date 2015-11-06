/*
	declares ptr as an array of MAX intefer pointer , thus , each
	elements in ptr , now holds a pointers to an int value . 
*/

#include <iostream>
using namespace std;

const int MAX = 3;

int main(int argc, char const *argv[])
{
	/* code */
	int arr[MAX] = {100 , 200 ,300};
	int *ptr[MAX];
	for(int i = 0 ; i < MAX ; i ++ )
	{
		cout<<"address :" <<&arr[i]<<endl;
		ptr[i] = &arr[i];
	}

	for (int j = 0; j < MAX; j ++)
	{
		/* code */
		cout<<"address :" <<&arr[j]<<endl;
		cout<<*ptr[j]<<endl;
	}

	return 0;
}