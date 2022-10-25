#include<iostream>
using namespace std;

class Employee{
	public:
		string name;
		int salary;
		
		Employee();
		void printSalary();
};

Employee::Employee(){
	cout<<"Employee() constructor called "<<endl;
	salary = 10000;
}

void Employee::printSalary(){
	cout<<"Employee salary is "<<salary<<endl;
}

int main(){
	Employee e1;
	e1.printSalary();
	
//	Employee* e = new Employee;
//	e->printSalary();
	
	return 0;
}
