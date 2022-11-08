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
			reg_num=new int;
			*reg_num=000000;
		}
		Student(int m,string n,int r){
			name=n;
			marks=m;
			reg_num=new int;
			*reg_num=r;
		}
		
		//copy constructor
//		Student(Student &std){
//			name=std.name;
//			marks=std.marks;
//			reg_num=new int;
//			*reg_num=*(std.reg_num);
//		}
		
		void showData(){
			cout<<"Name : "<<name<<" and Marks : "<<marks<<" and Registration Number : "<<*reg_num<<endl;
			cout<<"Pointer Address = "<<reg_num<<endl;
		}
		
		
};


int main(){
	Student s1(80,"Nomi",6543567);
	s1.showData();
	
//	Student s2(s1);
	Student s2=s1;
	s2.showData();
	
	
	return 0;
}
