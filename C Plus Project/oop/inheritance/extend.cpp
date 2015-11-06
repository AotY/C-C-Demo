/*
One of the most important concepts in object-oriented programming is that of inheritance. Inheritance allows us to define a class in terms of another class, which makes it easier to create and maintain an application. This also provides an opportunity to reuse the code functionality and fast implementation time.

When creating a class, instead of writing completely new data members and member functions, the programmer can designate that the new class should inherit the members of an existing class. This existing class is called the base class, and the new class is referred to as the derived class.

*/
#include <iostream>
 
using namespace std;

// Base class
class Shape 
{
   public:
      void setWidth(int w)
      {
         width = w;
      }
      void setHeight(int h)
      {
         height = h;
      }
   protected:
      int width;
      int height;
};

// Derived class
class Rectangle: public Shape
{
   public:
      int getArea()
      { 
         return (width * height); 
      }
};

int main(void)
{
   Rectangle Rect; // 
   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   Rectangle* rect2 = new Rectangle();
   rect2->setWidth(2);
   rect2->setHeight(3);
    // Print the area of the object.
   cout << "Total area: " << rect2->getArea() << endl;

   Shape* rect3 = new Rectangle();
   rect3->setWidth(3);
   rect3->setHeight(3);
   cout << "Total area: " << ((Rectangle*)rect3)->getArea() << endl;

   

   return 0;
}