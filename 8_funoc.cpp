//This program demonstrates how a function is defined outside the class
#include<iostream>
using namespace std;
class A 
{
int a=20 ,b=10,c;
public: 
void display()
{
    cout<<"I am class"<<endl;
}
void sum()
{

c=a+b;
cout<<"Sum is: "<<a+b<<endl;
}
void subtract();        //declaring the function inside class
};

void A::subtract()     //return_type class_name scope_resolution_operator function_name() {definition}
{
    c=a-b;
    cout<<"difference is : "<<c<<endl;
}

int main()
{
    A a;
    a.display();       // object class member access operator function _name.
    a.sum();
    a.subtract();      //Invoked in the same way as any other function.
    return 0;
}