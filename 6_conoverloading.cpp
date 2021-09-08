//This porgram demonstrates how a program can have both default and parameterised constructor and how to invoke them.
#include<iostream>
using namespace std;
class A
{
int a,b;
public:
A()
{
    a=10;
    b=20;
    cout<<"This is default Constructor"<<"\n"<<"a="<<a<<endl<<"b="<<b<<endl;
}
A(int c, int d)
{
    a=c;
    b=d;
    cout<<"This is the parametrised  Constructor "<<"\n"<<"a="<<a<<endl<<"b="<<b<<endl;
}
};
int main()
{
    A();
    A(20, 10);
    return 0;
}