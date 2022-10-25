#include<iostream>
using namespace std;

class Employee{
	public:
	string name;
	int salary;
	
//	Employee(){
//		cout<<"Constructor"<<endl;
//	}
	void signin(string n);
	void calculate_salary();
};

void Employee::signin(string n){
	cout<<"Employee "<<n<<" is signing in."<<endl;
}

int main(){
	Employee e1;
	e1.name="Ali";
//	cout<<e1.name<<endl;
	e1.signin(e1.name);
	
	Employee* e = new Employee;
//	e=&e1;
//	e->name = "Arslan";
//	cout<<e->name<<endl;
//	e->signin(e->name);
	
	return 0;
}
