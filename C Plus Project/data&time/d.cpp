/*
The c++ standard library does not provide a proper date type.
c++ inherits the structs and functions for date and time manipulation from
c .

There are four time-related types:
clock_t 
time_t
size_t

above all  , are capable of representing the system time and date 
as some sort of intefer.

tm
The structure type tm holds the date and time in the form of
a c structure having the following elements:
struct tm {
  int tm_sec;   // seconds of minutes from 0 to 61
  int tm_min;   // minutes of hour from 0 to 59
  int tm_hour;  // hours of day from 0 to 24
  int tm_mday;  // day of month from 1 to 31
  int tm_mon;   // month of year from 0 to 11
  int tm_year;  // year since 1900
  int tm_wday;  // days since sunday
  int tm_yday;  // days since January 1st
  int tm_isdst; // hours of daylight savings time
}

Fllowing are the important functions , which we use while working 
with date and time in c or c++ . All these function are parat 
of standard c and c++ libary and you can check their detail 
using refrence to c++ standard library given below

*/
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	//current data/time based on current system
	time_t now = time(0);

	//covert now to string form
	char *dt = ctime(&now);
	cout<<"The local date and time is : " << dt << endl;

	//covert now to tm struct for utc
	tm *gmtm = gmtime(&now);
	dt = asctime(gmtm);
	cout<<"The UTC date and time is :" <<dt << endl; 

	return 0;
}
/*
The tm structure is very important while working with date and
time in either c or c++ , This structure holds the date and
time in the form of a c structure as mentioned above .
most of the time related funtions makes use of tm structure.

*/