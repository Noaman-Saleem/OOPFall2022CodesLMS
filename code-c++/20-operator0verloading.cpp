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
        // Test add(Test &obj){
        //     Test temp;
        //     temp.number = number + obj.number;
        //     return temp;
        // }
        Test operator +(Test &obj){
            Test temp;
            temp.number = number + obj.number;
            return temp;
        }
};

int main() {

    // int x = 5,y = 6;
    // int z = x+y;
    // cout<<z<<endl;

    Test t1(4),t2(6),t3;
    // t1.showData();
    // t2.showData();
    // t3.showData();

    // t3 = t1 + t2;
    // t3 = t1.add(t2);
    // t3 = t1.operator+(t2);
    t3 = t1 + t2;
    t3.showData();


    return 0;
}
