#include <iostream>
#include <csignal>
#include <ctime>

using namespace std;

void signalHandler(int signum)
{
	cout<< "SIGINT == "<<signum <<endl;

	cout<<"Interrupt signal ( '<< signum << ' ) received . \n";
	//cleanup and close up stuff here
	//terminate program

	exit(signum);	
}

int main(int argc, char const *argv[])
{
	/* code */
	//register signal SIGINT and signal handler
	signal(SIGINT , signalHandler);

	
	while(1)
	{
		cout<<"Going to sleep ..."<<endl;
		sleep(1);
	}

	return 0;
}