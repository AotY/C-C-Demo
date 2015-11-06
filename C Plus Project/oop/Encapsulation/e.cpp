/*
Data Encapsulation in c++

All c++ programs are composed of the following two fundamental elemetns:
1 ; program statements(code) : This is the part of 
a program that performs actions and they are called funtions.
2; program data: The data is the information of the program
which affected by the program functions.

Data encapsulation is a mechanism of bundling the data,
and the functions that use them and data abstraction is 
a mechanism of exposing only the interfaces and hiding the
implementation details from the user.

Making one class a friend of another exposes the implementation
details and reduces encapsulation . 

*/

#include <iostream>
using namespace std;

class Adder{
   public:
      // constructor
      Adder(int i = 0)
      {
        total = i;
      }
      // interface to outside world
      void addNum(int number)
      {
          total += number;
      }
      // interface to outside world
      int getTotal()
      {
          return total;
      };
   private:
      // hidden data from outside world
      int total;
};
int main( )
{
   Adder a;
   
   a.addNum(10);
   a.addNum(20);
   a.addNum(30);

   cout << "Total " << a.getTotal() <<endl;
   return 0;
}