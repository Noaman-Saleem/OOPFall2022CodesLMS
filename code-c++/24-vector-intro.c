// Online C++ compiler to run C++ program online
#include<iostream>
#include<vector>

using namespace std;

int main() {
//   initialzing vectors

// Method 1
// vector<int> vector1 = {1,2,3,4,5};
//add new element
// vector1.push_back(6);
// for(int i=0; i < vector1.size(); i++){
//     cout<<vector1.at(i)<<endl;
// }
// cout<<vector1[5];



// Method 2
// vector<int> vector2 {1,2,3,4,5};
// for(int i=0; i < vector2.capacity(); i++){
//     cout<<vector2.at(i)<<endl;
// }

// Method 3
// vector<int> vector3(5,12);
// for(int i=0; i < vector3.capacity(); i++){
//     cout<<vector3.at(i)<<endl;
// }

// // Change Vector Element
// vector<int> primeNumbers = {1,2,3,5,7};
// cout<<"Before change"<<endl;
// for(int i=0; i<primeNumbers.size(); i++){
//     cout<<primeNumbers.at(i)<<endl;
// }

// primeNumbers.at(2) = 33;
// cout<<"After change"<<endl;
// for(int i=0; i<primeNumbers.size(); i++){
//     cout<<primeNumbers.at(i)<<endl;
// }

// Delete Vector Element
vector<int> primeNumbers = {1,2,3,5,7};
cout<<"Before delete"<<endl;
for(int i=0; i<primeNumbers.size(); i++){
    cout<<primeNumbers.at(i)<<endl;
}

primeNumbers.pop_back();
cout<<"After delete"<<endl;
for(int i=0; i<primeNumbers.size(); i++){
    cout<<primeNumbers.at(i)<<endl;
}
    return 0;
}
