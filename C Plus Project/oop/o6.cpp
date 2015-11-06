#include <iostream>
using namespace std;

class Box
{
   public:
      Box() { 
         cout << "Constructor called!" <<endl; 
      }
      ~Box() { 
         cout << "Destructor called!" <<endl; 
      }
};

int main( )
{
   Box* myBoxArray = new Box[4];

   Box* box = new Box();

   delete [] myBoxArray; // Delete array

   delete box;

   return 0;
}