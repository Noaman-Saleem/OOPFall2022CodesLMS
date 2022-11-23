#include<iostream>
using namespace std;

class Employee{
	protected:
		string name;
		string cnic;
		string address;
		int salary;
	public:	
		Employee(){
			this->name = "No-name";
			this->cnic = "*****-*******-*";
			this->address = "Not set";
			this->salary = 00;
		}
		
		void display(){
			cout<<"Hey brother i am the Cool Employee"<<endl;
		}
		
		void setName(string name){
			this->name = name;
		}
		
		void setCnic(string cnic){
			this->cnic = cnic;
		}
		
		void setAddress(string address){
			this->address = address;
		}
		
		void setSalary(int salary){
			this->salary = salary;
		}
};

class Programmer : public Employee{
	private:
		string expertise;
	public:
		void display(){
			cout<<"Hey i am a Programmer"<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"CNIC : "<<cnic<<endl;
			cout<<"Address : "<<address<<endl;
			cout<<"Salary : "<<salary<<endl;
		}
		
		void setExpertise(string e){
			expertise = e;
		}
		
		void showExpertise(){
			cout<<expertise<<endl;
		}
};

class Tester : public Employee{
	public:
		void display(){
			cout<<"Hey i am a Tester"<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"CNIC : "<<cnic<<endl;
			cout<<"Address : "<<address<<endl;
			cout<<"Salary : "<<salary<<endl;
		}
		
		void setSalary(int salary=0){
			this->salary = salary + 10000;
		}
};

int main(){
//	Employee e1;
//	e1.display();

	Programmer noaman;
//	noaman.display();
	noaman.setName("Noaman");
	noaman.setSalary(33000);
	noaman.setExpertise("ReactJS");
	noaman.showExpertise();
	noaman.display();
	cout<<noaman.salary;

//	Tester t1;
//	t1.setSalary(15000);
//	t1.display();
	
	
	
	return 0;
}
