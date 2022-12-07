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

        bool operator ==(Test &obj){
            if(this->number == obj.number){
                return true;
            } else {
                return false;
            }
        }

};

int main() {
//   int x =8 , y = 9;
//   if(x==y){
//       cout<<"These are equal"<<endl;
//   } else {
//       cout<<"These are not equal"<<endl;
//   }
//   cout<< (x==y);

    Test t1(55),t2(56);
      if(t1==t2){
      cout<<"These are equal"<<endl;
  } else {
      cout<<"These are not equal"<<endl;
  }




    return 0;
}
