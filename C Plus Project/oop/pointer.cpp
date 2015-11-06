#include <iostream>
 
using namespace std;

class Box
{
   public:
      // Constructor definition
      Box(double l=2.0, double b=2.0, double h=2.0)
      {
         cout <<"Constructor called." << endl;
         this->length = l;
         this->breadth = b;
         this->height = h;
      }
      double Volume()
      {
         return this->length * this->breadth * this->height;
      }
   private:
      double length;     // Length of a box
      double breadth;    // Breadth of a box
      double height;     // Height of a box
};

int main(void)
{
   Box Box1(3.3, 1.2, 1.5);    // Declare box1
   Box Box2(8.5, 6.0, 2.0);    // Declare box2
   //Box *ptrBox;                // Declare pointer to a class.
   Box *ptrBox;

   // Save the address of first object
   ptrBox = &Box1;
   //ptrBox = &Box1;
   //ptrBox = &Box2;

   // Now try to access a member using member access operator
   cout << "Volume of Box1: " << ptrBox->Volume() << endl;
   cout << "Volume of Box1: " << Box1.Volume() << endl;

   // Save the address of first object
   ptrBox = &Box2;

   // Now try to access a member using member access operator
   cout << "Volume of Box2: " << ptrBox->Volume() << endl;
   cout << "Volume of Box1: " << Box2.Volume() << endl;

   return 0;
}