// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

class Animal {

    public:
    virtual void speak(){
        cout<<"I can speak."<<endl;
    }
    //  pure virtual function
    // virtual void speak() = 0;
};

class Dog : public Animal {

    public:
    void speak(){
        cout<<"Woof Woof."<<endl;
    }
};

class Cat : public Animal {

    public:
     void speak(){
        cout<<"Meon Meon."<<endl;
    }
};

int main() {
  Animal ann;
  Dog puppy;
  Cat tom;

//   ann.speak();
//   puppy.speak();
//   tom.speak();


    Animal *ptr;
    ptr = &ann;
    ptr->speak();



    return 0;
}
