//today we are going to use base class and derived class methods
#include<iostream>
using namespace std;
class animal
{
    int x=10,y=40;
    
    void play()
    {
        cout<<"Lets play";
    }
    public:
    void eat()
    {
        cout<<"Hello Eat my Dog"<<endl;;
    }
    void show()
    {
        play();
    }
 
};
class dog:public animal
{
    public:
  void bark()
  {
      cout<<"Bark my Dog"<<endl;
  }
};
int main(){
dog d1;
d1.eat();
d1.bark();
d1.show();

return 0;
}