#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		int age;
		class Address{
			private:
				string house_no;
				string city;
				string province;
			public:
				void setAddress(string hn,string c,string p){
					house_no = hn;
					city=c;
					province=p;
				}
				void showAddress(){
					cout<<"House Number : "<<house_no<<endl;
					cout<<"City : "<<city<<endl;
					cout<<"Province : "<<province<<endl;
				}
		}; //Address Class
		Address add;
	public:
		void setName(string n){
			name = n;
		}
		void setage(int a){
			age = a;
		}
		void setAddress(string hn,string c,string p){
			add.setAddress( hn, c, p);
		}
		
		void showData(){
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
			add.showAddress();
		}
}; //Student Class

int main(){
	Student s1;
	s1.setName("Noaman");
	s1.setage(32);
	s1.setAddress("1234","Lahore","Punjab");
	
	s1.showData();
	
	return 0;
}
