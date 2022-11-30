#include<iostream>
using namespace std;


class MyClass{
	public:
		static int x;
		
		static void greet(){
			cout<<"Good Morning!"<<endl;
		}
};

int MyClass::x = 0;

int main(){
    // cout<<MyClass::x<<endl;
    // MyClass::greet();
    
    // MyClass m1;
    // m1.x = 7;
    // cout<<m1.x<<endl;
    // m1.greet();
    
    return 0;
}

