#include<iostream>
using namespace std;

//static members exist as members of the class rather than as an instance 
//in each object of the class. 
//There is only a single instance of each static data member for the entire class.


//Non-static member functions can access all data members of the class: static and non-static.

//Static member functions can only operate on the static data members.


class User{
	int id;
	static int next_id;
	
	public:
		User(){
		id = User::next_user_id();
	}
		//when both the function and member are STATIC than no need to 
		//write User:: inside the static function
		static int next_user_id(){
//			cout<<id;    invalid to use non-static member in static function
			next_id++;
			return next_id;
		}
		
		
	
	int get_id(){
		return id;
	}
};
int User::next_id = 0;   //initialize the static variable here

int main(){
	
	User u;
	cout<<"User u id: "<<u.get_id()<<endl;

    User v;
	cout<<"User v id: "<<v.get_id()<<endl;
	
//	cout<<User::next_id<<endl;
	
		
	return 0;
}
