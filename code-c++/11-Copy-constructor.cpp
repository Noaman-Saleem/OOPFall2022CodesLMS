#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		int marks;
	public:
		Student(){
			name ="not-set";
			marks=0;
		}
		Student(int m,string n){
			name=n;
			marks=m;
		}
		
		//copy constructor
//		Student(Student &std){
//			name=std.name;
//			marks=std.marks;
//		}
		
		void showData(){
			cout<<"Name : "<<name<<" and Marks : "<<marks<<endl;
		}
		
		
};


int main(){
	Student s1(80,"Nomi");
//	s1.showData();
	
//	Student s2(s1);
	Student s2=s1;
	s2.showData();
	
	
	return 0;
}
