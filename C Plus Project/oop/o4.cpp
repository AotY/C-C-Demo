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
      Rectangle()
      {
         cout<<"being create !"<<endl;
      }
      int getArea()
      { 
         return (width * height); 
      }
};

int main(void)
{
   Rectangle Rect = new Rectangle();
 
   Rect.setWidth(5);
   Rect.setHeight(7);

   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;

   return 0;
}