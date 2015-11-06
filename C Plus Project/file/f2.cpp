#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	char data[100] ;
	//open a file in write mode
	ofstream outfile;
	outfile.open("test.dat");

	cout<<"Input You Name: "<<endl;
	cin.getline(data , 100) ;

	//write inputted data into the file
	cout<<data<<endl;

	outfile<<data<<endl;

	outfile.close();

	//open a file in read mode
	ifstream infile;
	infile.open("test.dat");
	infile >> data;

	cout<<data<<endl;

	infile.close();

	return 0;
}