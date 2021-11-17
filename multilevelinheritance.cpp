#include<iostream>
using namespace std;
class one
{
public:
void print()
{
    cout<<"I am first hokage"<<endl;
}
};
class two:public one //base class is one and derived is two derivation is done by : public/private
{
    public:
 void print1()
 {
     cout<<"I am second hokage"<<endl;
 }
};
class three:public two //both are gervied classes no one of them is base class
{
    public:
 void print2()
 {
     cout<<"I am third hokage"<<endl;
 }
};
int main(){
three t;
t.print();
t.print1();
t.print2();
return 0;
}