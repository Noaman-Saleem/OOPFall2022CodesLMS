#include<iostream>
using namespace std;

class Animal{
	protected:
		string breed;
	public:
		Animal(){
			cout<<"Animal Constructor called"<<endl;
		}
		
		void eat(){
			cout<<"I can eat"<<endl;
		}
		void walk(){
			cout<<"I can walk"<<endl;
		}
		void speak(){
			cout<<"I can speak"<<endl;
		}
		~Animal(){
			cout<<"Animal Destructor called"<<endl;
		}
};

class Dog : public Animal{
	
	public:
		Dog(string breed){
			cout<<"Dog Constructor called"<<endl;
			this->breed = breed;
		}
		void speak(){
			cout<<"Woof Woof!"<<endl;
		}
		void showBreed(){
			cout<<breed<<endl;
		}
		~Dog(){
			cout<<"Dog Destructor called"<<endl;
		}
};

class Cat : public Animal{
	public:
		Cat(string breed){
			cout<<"Cat Constructor called"<<endl;
			this->breed = breed;
		}
		void speak(){
			cout<<"Meon Meon!"<<endl;
		}
		void showBreed(){
			cout<<breed<<endl;
		}
		~Cat(){
			cout<<"Cat Destructor called"<<endl;
		}
};

int main(){
	Dog d1("Bull Dog");
//	d1.speak();
//	cout<<d1.breed<<endl;
//	d1.showBreed();
	
	Cat c1("Iranian");
//	c1.speak();
//	c1.showBreed();
	
	return 0;
}
