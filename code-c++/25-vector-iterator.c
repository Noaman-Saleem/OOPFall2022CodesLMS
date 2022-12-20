// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int main() {
   vector<int> primeNumbers={1,2,3,5,7,11};
   vector<int>::iterator iter;

   iter = primeNumbers.begin();

   cout<<"primeNumbers[0] = "<<*(iter+4)<<endl;

   iter = primeNumbers.end();

   cout<<"primeNumbers[5] = "<<*(iter-2)<<endl;

   for(iter = primeNumbers.begin(); iter != primeNumbers.end(); ++iter){
       cout<<*iter<<endl;
   }

    return 0;
}
