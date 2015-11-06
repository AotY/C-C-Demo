/*
The copy constructor is a constructor which creates an object
by initializing it with an object of the same class , which
has been creatd previously . The copy constructor is used to :
1; Initialize one object from another of the same type.
2; Copy an object to pass it as an argument to a function.
3; Copy an object to return it from a function.

If the class has pointer variable and has some dynamic memory allocations,
then it is a  must to have a copy constructor . 
*/
#include <iostream>

using namespace std;

class Line
{
public:
	int getLength(void);
	void setLength(int len);
	Line(int len);
	Line(const Line &obj);
	~Line();

private:
	int *ptr;
};

Line::Line(int len)
{
	cout<<"this : "<<this<<endl;
	cout<<"Normal constructor allocating ptr " <<endl;
	//allocate memory for the pointer

	ptr = new int ; // allocate int size for the pointer
	*ptr = len;
}

Line::Line(const Line &obj)
{
	cout<<"this : "<<this<<endl;
	cout<<"Copy constructor allocating ptr . "<<endl;
	ptr = new int;
	*ptr = *obj.ptr ; // copy the value
}

Line::~Line()
{
	cout<<"this : "<<this<<endl;
	cout<<"Freeing memory!"<<endl;
	delete ptr;
}

int Line::getLength(void)
{

	return *ptr;
}

void Line::setLength(int len)
{
	*ptr = len;
}

void display(Line obj)
{
   cout << "Length of line : " << obj.getLength() <<endl;
}

// Main function for the program
int main( )
{
   Line line1(10);

   Line line2 = line1; // This also calls copy constructor

   display(line1);
   display(line2);

   return 0;
}