#include <iostream>
using namespace std;

// C++ Aggregation (HAS-A Relationship)
// In C++, aggregation is a process in which one class defines another class as any entity reference. It is another way to reuse the class. It is a form of association that represents HAS-A relationship.

// C++ Aggregation Example
// Let's see an example of aggregation where Employee class has the reference of Address class as data member. In such way, it can reuse the members of Address class.



class Address {
    public:
   string area, city, state;
     Address(string area, string city, string state)
    {
        this->area = area;
        this->city = city;
        this->state = state;
    }
};
class Employee
    {
        private:
        Address* address;  //Employee HAS-A Address
        public:
        int id;
        string name;
        Employee(int id, string name, Address* address)
       {
           this->id = id;
           this->name = name;
           this->address = address;
       }
     void display()
       {
           cout<<id <<" "<<name<< " "<<
             address->area<< " "<< address->city<< " "<<address->state<<endl;
       }
   };
int main(void) {
    Address a1= Address("Johar Town","Lahore","Punjab");
    Employee e1 = Employee(111,"Noaman",&a1);
            e1.display();
   return 0;
}
