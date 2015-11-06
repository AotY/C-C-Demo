/*
 If a function is inline, the compiler places a copy of the code of that 
 function at each point where the function is called at compile time.

Any change to an inline function could require all clients of the 
function to be recompiled because compiler would need to replace all the code once again otherwise it will continue with old functionality.

A function definition in a class definition is an inline function 
definition,
 even without the use of the inline specifier.
 
现在的编译器会自动决定是否对函数进行上面的操作，而不是根据你前面加不加inline。 

但是inline本身还是有另外一个意义： 

一个可执行文件的cpp文件中一个函数只能被定义一次。如果你把函数定义在一个.h文件中并让两个cpp包含就会造成这个函数分别在两个cpp中被定义产生错误。但是inline函数是允许在多个cpp中多次定义的，就解决了这个问题。
*/

 #include <iostream>
 
using namespace std;

inline int Max(int x , int y)
{
	return (x > y) ? x : y ;
}

// Main function for the program
int main( )
{

   cout << "Max (20,10): " << Max(20,10) << endl;
   cout << "Max (0,200): " << Max(0,200) << endl;
   cout << "Max (100,1010): " << Max(100,1010) << endl;
   return 0;
}