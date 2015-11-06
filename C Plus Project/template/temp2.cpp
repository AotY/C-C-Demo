#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T>
class Stack
{
private:
	vector<T> elems; // elements 

public:
	void push(T const&); // push element 
	void pop() ; // pop element 
	T top() const ;//return top element
	int size()
	{
		return elems.size();
	}

	bool empty() const
	{
		return elems.empty();
	}

};

template <class T>
void Stack<T> :: push(T const& elem)
{
	//append copy of passed element
	elems.push_back(elem);
}

template <class T>
T Stack<T> :: top() const // T Stack<T> :: top() 
{
	if(elems.empty())
	{
		throw out_of_range("Stack<> :: top() : empty Stack.");
	}
	return elems.back();
}

template <class T>
void Stack<T> :: pop() 
{
	if(elems.empty())
	{
		throw out_of_range("Stack<> :: pop() : empty Stack.");
	}

	elems.pop_back();
}


int main(int argc, char const *argv[])
{
	/* code */

	try{

		Stack<int> intStack ;
		Stack<string> strStack;

		intStack.push(10);
		intStack.push(11);

		cout<<"size : "<<intStack.size()<<endl;
		cout<<"first elems is : "<<intStack.top()<<endl;
		cout<<"size : "<<intStack.size()<<endl;


		string str1 = "Hello ";
		string str2 = " World . ";

		strStack.push(str1);
		strStack.push(str2);
		
		cout << strStack.top() << std::endl; 
		strStack.pop(); 
		cout << strStack.top() << std::endl;

		
		strStack.pop(); 	

		strStack.pop();
		//strStack.pop();
		//cout<<"size : "<<intStack.size()<<endl;
		//cout<<"first elems is : "<<intStack.top()<<endl;


	}
	catch(exception const& ex){

		cerr<<"exception : "<<ex.what()<<endl;
		return -1;

	}
	return 0;
}

//std::vector<char> v;