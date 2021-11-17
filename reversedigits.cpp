#include<iostream>
using namespace std;
int reverse_digit(int n)
{
    int rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
int main(){
int no;
cout<<"Enter no::";
cin>>no;
 int lol=reverse_digit(no);
 cout<<"The reversed Number is::"<<lol;
return 0;
}