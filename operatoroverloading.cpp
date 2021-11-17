#include<iostream>
using namespace std;
class complex{
public:
int real,img;
complex()
{
 real=0;
 img=0;
 cout<<"First value are"<<real <<" "<<img<<endl;
}
complex(int rel,int imgt)
{
    real=rel;
    img=imgt;
}
complex operator + (complex s)
{
 complex temp;
 temp.real=real+s.real;
 temp.img=img+s.img;
 return temp;
}
~complex()
{
    cout<<"The destructor is called"<<endl;
}
void display()
{
    cout<<real<<"+i"<<img;
}
};
int main(){
complex one(10,20);
complex two(30,40);
complex three;
one.display();
cout<<endl;
two.display();
cout<<endl;
three=one+two;//at this point constructor is called complex three 
three.display();

return 0;
}