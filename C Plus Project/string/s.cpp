#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	string str1 = "Hello";
	string str2 = "\tWorld";
	string str3 ;
	int len ;

	str3 = str1 + str2 ;
	cout << str3 << endl;

	cout<<"len of str1 : "<<str1.size()<<endl;

	len = str3.size();
	cout<<"len of str3 : "<<len <<endl;

	return 0;
}