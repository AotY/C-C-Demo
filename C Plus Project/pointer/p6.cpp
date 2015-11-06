#include <iostream>
 
using namespace std;
const int MAX = 3;
 
int main ()
{
   int  var[MAX] = {10, 100, 200};
 
   for (int i = 0; i < MAX; i++)
   {
      *(var + i) = i;    // This is a correct syntax
   		//*var = i;
      //var++;       // This is incorrect. 
   }
   for (int i = 0; i < MAX; ++i)
   {
   	cout<<var[i]<<endl;
   	/* code */
   }
   return 0;
}
/*
It is perfectly accptable to apply the pointer operator * to
var  , but it is ilegal to modify var value . The reason for this is 
that var is a constant that points to the beginning of an array and can not 
be used as l-value.

*/