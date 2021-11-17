#include <iostream>
using namespace std;
class a
{
protected:
    int k;

public:
    void value()
    {
        cout << "Enter value of a=";
        cin >> k;
    }
};
class b
{
protected:
    int l;

public:
    void value1()
    {
        cout << "Enter value of b=";
        cin >> l;
    }
};
class c : public b, public a
{
public:
    void add()
    {
        int m;
       value();
       value1();
        m=k+l;
        cout<<"The addition is"<<m<<endl;
    }
};
class d: public a,public b
{
 public :
 void mul()
 {
    value();
    value1();
     int j,o;
     j=k;
     o=l;
    int n=j*o;
    cout<<"The multiplication is="<<n<<endl;
 }
};
int main()
{
// a a1;
// a1.value();
// b b1;
// b1.value1();
c c1;
c1.add();
d d1;
d1.mul();

    return 0;
}