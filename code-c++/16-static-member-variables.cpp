// C++ program to demonstrate static
// variables inside a class

#include<iostream>
using namespace std;

class MyClass
{
public:
	static int i;
	
	MyClass()
	{
		// Do nothing
	};
};

int MyClass::i = 0;

int main()
{
MyClass obj1;
MyClass obj2;
obj1.i =2;
obj2.i = 3;
	
// prints value of i
cout << obj1.i<<" "<<obj2.i<<endl;
//cout<<MyClass::i;
}

