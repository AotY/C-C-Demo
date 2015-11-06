#include <iostream>
#include <string>

using namespace std;

template <typename T>
inline T const& Max (T const& a , T const& b)
{
	return a > b ? a : b;
}

int main(int argc, char const *argv[])
{
	/* code */
	cout<<"max of (1 , 3) :"<<Max(1 ,3 )<<endl;

	cout<<"max of (2.3 , 1.3) :"<<Max(2.3 ,1.3 )<<endl;

	cout<<"max of (0x43 , 0xf0) :"<<Max(0x43 ,0xf0 )<<endl;

	string s1 = "Hello1"; 
    string s2 = "Hello2"; 

	cout<<"max of ('Hello' ,'World' )  :"<<Max(s1 ,s2 )<<endl;
	return 0;
}