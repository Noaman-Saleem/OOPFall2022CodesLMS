#include<iostream>
using namespace std;

class Employee{
	public:
		string name;
		int salary;
		
		//constructor overloading
		Employee(); //default constructor
		Employee(int salary);  //parameterized constructor
		
		
		void printSalary();
		
		//destructor
		~Employee(){
			cout<<"Employee Destructor Called."<<endl;
		}
};

Employee::Employee(){
	cout<<"Employee() constructor called "<<endl;
	salary = 10000;
}

Employee::Employee(int salary){
	cout<<"Employee(int salary) constructor called "<<endl;
	//this pointer
	this->salary = salary;
}

void Employee::printSalary(){
	cout<<"Employee salary is "<<salary<<endl;
}

int main(){
//	Employee e1(15000);
//	e1.printSalary();
	
	Employee* e = new Employee(23000);
	e->printSalary();
	//if not deleted *e will become a Dangling Pointer
//	cout<<e<<endl;
	delete e;
//	cout<<e<<endl;
	e =NULL;
//	cout<<e<<endl;

	return 0;
}
