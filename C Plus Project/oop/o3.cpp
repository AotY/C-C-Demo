#include <iostream>

using namespace std;

class Line
{

public:
	void setLength(double len);
	double getLength(void);
	Line(double len);
	~Line();
private:
	double length;

};

Line::Line(double len)
{
	cout<<"Object is being created" <<endl;
	length = len;
}

Line::~Line(void)
{
	cout<<"Object is being deleted"<<endl;

}

double Line::getLength(void)
{

	return length;
}

void Line::setLength(double len)
{
	length = len;

}

// Main function for the program
int main( )
{
   Line line(10.0);
 
 	cout << "Length of line : " << line.getLength() <<endl;
   // set line length
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
 
   return 0;
}