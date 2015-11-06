#include <iostream>
using namespace std;

class Box
{
protected:
	double width ;

};

class SmallBox:Box // SmallBox is the derived class
{
public:
	void setSmallWidth(double wid);
	double getSmallWidth(void);

};

//Member functions of child class
double SmallBox::getSmallWidth(void)
{
	return width ;
}

void SmallBox::setSmallWidth(double wid)
{
	width = wid ;
}

//main function for the program
int main(int argc, char const *argv[])
{
	/* code */
	SmallBox box ;
	//Box box ;
	box.setSmallWidth(50);
	cout<<"Width of box : "<<box.getSmallWidth()<<endl;
	return 0;
}