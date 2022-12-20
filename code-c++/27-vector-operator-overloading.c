// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

class YoutubeChannel{
  private:
    string name;
    int numberOfSubscriber;
    public:
    YoutubeChannel(){
        name="not-set";
        numberOfSubscriber=0;
    }
    YoutubeChannel(string n,int s){
        name=n;
        numberOfSubscriber=s;
    }
    void show(){
        cout<<"Name = "<<name<<endl;
        cout<<"Number Of Subscriber = "<<numberOfSubscriber<<endl;
    }
};

class MyCollection{
  private:
  vector<YoutubeChannel> myChannels;
  public:

  void show(int index){

  }
};

int main() {
    YoutubeChannel yt1("Code Ninja",4532);
    YoutubeChannel yt2("ReactJS",654);

    MyCollection myCollection;
    myCollection += yt1;
    myCollection += yt2;

    myCollection.show(0);


    return 0;
}
