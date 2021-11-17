#include <iostream>
using namespace std;
class add
{
public:
int a1,a2;
add()
{
    cout<<"1st constructor is called"<<endl;
 a1=1,a2=1;
}
add(int i,int j)
{
    cout<<"2nd constructor is called"<<endl;
    a1=i;
    a2=j;
}
add operator *(add s) //this is used to have operations between objects  if * is present here and same is in int main()
//then it will go to this opeartions
{
    add t;
    cout<<"lol"<<endl;
    t.a1=a1*s.a1;
    t.a2=a2*s.a2;
    return t;

}
void display()
{
    cout<<"The value are "<<a1<<" "<<a2;
}
~add()
{
    cout<<"Destructor is called"<<endl;
}
};
int main()
{
add w1(10,12);
add w2(11,13);
add w3;
w1.display();
cout<<endl;
w2.display();
cout<<endl;
w3=w1*w2;
w3.display();
cout<<endl;
    return 0;
}
/*
2nd constructor is called
2nd constructor is called
1st constructor is called
The value are 10 12      
The value are 11 13      
1st constructor is called
lol
Destructor is called     
Destructor is called     
The value are 110 156    
Destructor is called     
Destructor is called
Destructor is called
*/