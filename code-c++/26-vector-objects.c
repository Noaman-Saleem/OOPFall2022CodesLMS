// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

class Book{
  private:
    string title;
    int pages;
    public:
    Book(){
        title="not-set";
        pages=0;
    }
    Book(string t,int p){
        title=t;
        pages=p;
    }
    void show(){
        cout<<"Title = "<<title<<endl;
        cout<<"Pages = "<<pages<<endl;
    }
};

int main() {
    Book english("English",102),urdu("Urdu",543),math("Math",234);
   vector<Book> books={english,urdu,math};

   books.at(2).show();



    return 0;
}
