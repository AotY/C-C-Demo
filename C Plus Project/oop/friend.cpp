/*
class Box
{
	double width;
public:
	double length;
	friend void printWidth(Box box);
	void setWidth(double wid);
};
*/
#include <iostream>
 
using namespace std;

class Box
{
	double width;
public:
	double length;
	friend void printWidth(Box box);
	void setWidth(double wid);
};


void Box::setWidth(double wid)
{
	width = wid;
}

//printWidth() is not a member function of any class
void printWidth(Box box)
{
	//because printWidth() is a friend of box , it can directly access any member of this class

	cout<<"Width of box :" <<box.width;
}

int main(int argc, char const *argv[])
{
	/* code */
	Box* box = new Box();
	box->setWidth(10.0);
	printWidth(*box);
	return 0;
}