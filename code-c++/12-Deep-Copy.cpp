#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		int marks;
		int* reg_num;
	public:
		Student(){
			name ="not-set";
			marks=0;
			reg_num = new int;
			*reg_num = 000000;
		}
		Student(int m,string n,int r){
			name=n;
			marks=m;
			reg_num = new int;
			*reg_num = r;
		}
		
//		Student(Student &std){
//			name = std.name;
//			marks = std.marks;
//			reg_num = std.reg_num;
//		}

		Student(Student &std){
				name = std.name;
				marks = std.marks;
				reg_num = new int;
				*reg_num = *(std.reg_num);
			}
		
		
		void showData(){
			cout<<"Name : "<<name<<" and Marks : "<<marks<<" and Registration Number : "<<*reg_num<<endl;
			cout<<"Pointer Address = "<<reg_num<<endl;
		}
		
		void setReg(int r){
			*reg_num = r;
		}
		
		
};


int main(){
	Student s1(44,"Ali",121212);
//	s1.showData();
	
	Student s2 = s1;
	
	
//	s2.showData();
	
	s2.setReg(22222);
	s1.showData();
	
	return 0;
}
