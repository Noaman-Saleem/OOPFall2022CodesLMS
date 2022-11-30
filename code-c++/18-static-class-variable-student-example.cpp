#include<iostream>
using namespace std;

class Student{
	private:
		int rollNumber;
		static int nextRollNumber;
		
	public:
		Student(){
			++nextRollNumber;
			rollNumber = nextRollNumber;
		}
		void getRollNumber(){
			cout<<rollNumber<<endl;
		}
};
int Student::nextRollNumber = 0;

int main(){
	Student nomi,faizan,faisal,umair;
	
	nomi.getRollNumber();
	faizan.getRollNumber();
	faisal.getRollNumber();
	umair.getRollNumber();
	
	
	
//	Student nomi;
//	nomi.getRollNumber();
//	
//	Student faizan;
//	faizan.getRollNumber();
	
	
	return 0;
}
