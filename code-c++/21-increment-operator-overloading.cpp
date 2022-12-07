// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Test{
    int number;
    public:
        Test(){
            number = 0;
        }
        Test(int num){
            number = num;
        }
        void showData(){
            cout<<"Number = "<<number<<endl;
        }
        // void increment(){
        //     ++this->number;
        // }

         void operator++(){
            ++this->number;
        }
        void operator++(int){
            this->number++;
        }

};

int main() {
    // int x = 8;
    // ++x;
    // cout<<x<<endl;

    Test t1(5);
    // ++t1;

    // t1.increment();
    // ++t1;
    t1++;
    t1.showData();



    return 0;
}
